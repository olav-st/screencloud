/* * ScreenCloud - An easy to use screenshot sharing application
 * Copyright (C) 2013 Olav Sortland Thoresen <olav.s.th@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 * PARTICULAR PURPOSE. See the GNU General Public License for more details.
 */

#ifndef PJSSH_H
#define PJSSH_H
#include <libssh2.h>
#include <iosfwd>
#include <string>
/// Class that encapsulates SSH and/or SFTP communications.
/// Dedicated to the public domain.
/// @author Peter Jansson   http://peter.jansson.net/
/// @date 2008-05-17, updated 2011-07-22.
class PJSSH
{
  public:
    /// Create a SSH communications capable object.
    /// The SSH session will be initialized to communicate to the host:port
    /// specified in the arguments to this constructor, using the login
    /// credentials supplied.
    PJSSH(
        const char* aUserName,
        const char* aPassword,
        const char* aHostName,
        const int& aPortNumber);

    /// Destory this instance.
    /// The SSH session will be unitialized.
    ~PJSSH();

    /// Execute the supplied command through the established SSH session.
    void ExecuteCmd(const char* aCommand) const;

    /// Get a file from the remote system and write as is (i.e. binary)
    /// on the supplied stream
    void GetFile(const char* aRemoteFileName, std::ostream& aStream) const;

    /// Read from the supplied stream and put it as is (i.e. binary)
    /// on the remote file.
    /// The remote file will be truncated and over written if it exists.
    void PutStream(std::istream& aStream, const char* aRemoteFileName) const;

  private:
    /// We don’t really support copying at this stage.
    PJSSH(const PJSSH & source);

    /// We don’t really support assignment copy at this stage.
    PJSSH & operator=(const PJSSH & source);

    /// The SSH session structure to use in all communcations using this
    /// instance.
    LIBSSH2_SESSION* mSession;

    /// Flag that indicates that the SSH session was successfully initiated.
    bool SessionIsOk;

    /// Error message set if any SSH communication failed.
    std::string LastErrorMessage;

    /// The socket used for communication.
    unsigned int hSock;

    /// Create a socket and connect to the host:port.
    /// @return the socket.
    int CreateSocketAndConnect(
        const char* aHostName,
        const int& aPortNumber);
};
#endif // PJSSH_H