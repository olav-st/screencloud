//
// ScreenCloud - An easy to use screenshot sharing application
// Copyright (C) 2013 Olav Sortland Thoresen <olav.s.th@gmail.com>
//
// This program is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free Software
// Foundation; either version 2 of the License, or (at your option) any later
// version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
// PARTICULAR PURPOSE. See the GNU General Public License for more details.
//

#include "PJSSH.h"
#include <sstream>
#include <stdexcept>
#include <libssh2_sftp.h>
#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
#define PJSSH_WINDOWS
#include <winsock2.h>
#ifndef WINSOCK_VERSION
#define WINSOCK_VERSION 2
#endif
#else
#define PJSSH_POSIX
#include <netdb.h>  // gethostbyname
#endif

PJSSH::PJSSH(
    const char* aUserName,
    const char* aPassword,
    const char* aHostName,
    const int & aPortNumber):
  LastErrorMessage(""),
  SessionIsOk(false),
  hSock(CreateSocketAndConnect(aHostName,aPortNumber))
{
  if( hSock > 0 )
  {
    // Now, we have the socket, let's initialize the session.
    mSession = libssh2_session_init();
    if (libssh2_session_startup(mSession,hSock))
    {
      LastErrorMessage = "Could not startup the ssh session.";
    }
    else
    {
      if(libssh2_userauth_password(mSession,aUserName,aPassword))
      {
        LastErrorMessage = "Could not get authenticated.";
      }
      else
      {
        SessionIsOk = true;
      }
    }
  }
}

PJSSH::~PJSSH()
{
  if( SessionIsOk )
  {
    libssh2_session_disconnect(mSession,"Goodbye from PJSSH.");
    libssh2_session_free(mSession);
  }
#ifdef PJSSH_WINDOWS
  closesocket(hSock);
  WSACleanup();
#else
#ifdef PJSSH_POSIX
  close(hSock);
#endif
#endif
}

void PJSSH::ExecuteCmd(const char* aCommand) const
{
  if( !SessionIsOk )
  {
    std::ostringstream o;
    o<<"Can not execute command since the SSH session is not set up ok. "
      "Last error message: ";
    throw std::logic_error(o.str());
  }

  // Try to open a channel to be used for executing the command.
  LIBSSH2_CHANNEL* channel = libssh2_channel_open_session(mSession);
  if( NULL == channel )
  {
    throw std::runtime_error("Could not open communication channel for "
        "executing remote command.");
  }

  //  Execute the command.
  if( -1 == libssh2_channel_exec(channel,aCommand))
  {
    throw std::runtime_error("Failed to execute the remote command.");
  }

  // Close the channel.
  libssh2_channel_close(channel);

  // Free resources.
  libssh2_channel_free(channel);
}

PJSSH::PJSSH(const PJSSH & source)
{
}

PJSSH & PJSSH::operator=(const PJSSH & source)
{
  return *this;
}

void
PJSSH::GetFile(const char* aRemoteFileName, std::ostream& aStream) const
{
  LIBSSH2_SFTP* sftp = libssh2_sftp_init(mSession);

  if( NULL == sftp )
  {
    throw std::runtime_error("Failed to open a sftp session.");
  }

  LIBSSH2_SFTP_HANDLE* file_handle
    = libssh2_sftp_open(sftp,aRemoteFileName,LIBSSH2_FXF_READ,0);

  if( NULL == file_handle )
  {
    std::ostringstream o;
    o<<"Failed to open remote file for reading. Last error code="
      <<libssh2_sftp_last_error(sftp);
    throw std::runtime_error(o.str());
  }

  // Read the whole file and write the read data on the supplied stream.
  char buffer[1024];
  size_t num_of_read_bytes(0);
  do
  {
    num_of_read_bytes = libssh2_sftp_read(file_handle,buffer,1024);
    aStream.write(buffer,num_of_read_bytes);
  } while( num_of_read_bytes == 1024 );

  // Close sftp file handle and end SFTP session.
  libssh2_sftp_close_handle(file_handle);
  libssh2_sftp_shutdown(sftp);
}

void
PJSSH::PutStream(std::istream & aStream, const char* aRemoteFileName) const
{
   //Check if local file exists
    if(!aStream)
    {
        std::string error("The local file does not exist");
        throw std::runtime_error(error);
    }
   LIBSSH2_SFTP* sftp = libssh2_sftp_init(mSession);

   if( NULL == sftp )
   {
      throw std::runtime_error("Failed to open a sftp session.");
   }
   //Check if remote file exitst
   LIBSSH2_SFTP_ATTRIBUTES fileinfo;
   int status = libssh2_sftp_stat(sftp, aRemoteFileName , &fileinfo);
   if(status == 0)
   {
       //File exitsts
       std::string error("The file " + std::string(aRemoteFileName) + " alerady exists");
       throw std::runtime_error(error);

   }

   LIBSSH2_SFTP_HANDLE* file_handle
      = libssh2_sftp_open(sftp,aRemoteFileName,
            LIBSSH2_FXF_TRUNC | LIBSSH2_FXF_WRITE | LIBSSH2_FXF_CREAT,0);

   if( NULL == file_handle )
   {
      std::ostringstream o;
      o<<"Failed to write on remote file. Last error code="
         <<libssh2_sftp_last_error(sftp);
       throw std::runtime_error(o.str());
   }
   char buffer[1024];
   do
   {
      aStream.read(buffer,1024);
      const std::streamsize num_of_read_characters(aStream.gcount());
      if( num_of_read_characters > 0 )
      {
         const size_t num_of_bytes_written
            = libssh2_sftp_write( file_handle, buffer, num_of_read_characters);
         if( num_of_bytes_written == ((size_t)-1) )
         {
            throw std::runtime_error("Failed to write to the remote file.");
         }
         else if( static_cast<std::streamsize>(num_of_bytes_written)
               != num_of_read_characters )
         {
            throw std::runtime_error("Failed to write all bytes to remote file.");
         }
         else if(num_of_read_characters <= 0)
         {
            throw std::runtime_error("Failed to read characters from the input "
                  "stream to be written to the remote file.");
         }

      }
   } while( aStream );
   // Close sftp file handle and end SFTP session.
   libssh2_sftp_close_handle(file_handle);
   libssh2_sftp_shutdown(sftp);
}

int
PJSSH::CreateSocketAndConnect(const char* aHostName,const int& aPortNumber)
{
#ifdef PJSSH_WINDOWS
  int hSock(INVALID_SOCKET);
  WSADATA wsaData = {0};
  if( 0 != WSAStartup( WINSOCK_VERSION, &wsaData ))
  {
    LastErrorMessage = "Failed to initialize communication.";
  }
  else
  {
    hSock = socket( AF_INET, SOCK_STREAM, IPPROTO_IP );
    // Set the address to use for communication.
    sockaddr_in saServer = {0};
    saServer.sin_family = PF_INET;
    saServer.sin_port = htons( aPortNumber );
    saServer.sin_addr.s_addr = inet_addr( aHostName );

    if( SOCKET_ERROR == connect(hSock,(sockaddr*)&saServer,sizeof(sockaddr)))
    {
      LastErrorMessage = "Failed to connect.";
      hSock = INVALID_SOCKET;
    }
    else
    {
      if( hSock == INVALID_SOCKET )
      {
        LastErrorMessage = "Unable to connect.";
      }
    }
  }
  return hSock;
#else
#ifdef PJSSH_POSIX
  int hSock(-1);
  struct hostent* hp=gethostbyname(aHostName);
  if(!hp)
  {
    LastErrorMessage = "Failed to get IP adress of server.";
  }
  else
  {
    struct sockaddr_in s;
    s.sin_addr=*(struct in_addr *)hp->h_addr_list[0];
    s.sin_family=hp->h_addrtype;
    s.sin_port=htons(aPortNumber);
    hSock = socket(AF_INET,SOCK_STREAM,0);
    if(hSock<0)
    {
      LastErrorMessage = "Failed to create socket.";
    }
    else
    {
      if(connect(hSock,(struct sockaddr *)&s,sizeof(s))<0)
      {
        LastErrorMessage = "Failed to connect.";
        hSock = -1;
      }
    }
  }
  return hSock;
#else
#error "Need to get a socket for this platform!"
#endif
#endif
}

