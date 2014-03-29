@echo off

REM -- Prepare the Command Processor --
SETLOCAL ENABLEEXTENSIONS
SETLOCAL DISABLEDELAYEDEXPANSION

:BatchSubstitude - parses a File line by line and replaces a substring"
::syntax: BatchSubstitude.bat OldStr NewStr File
::    In OldStr and in NewStr, two quotes are reduced to a single quote, so you can search for a single quote
::          OldStr [in] - string to be replaced, must not begin with "*" or "!", must not contain "="
::          NewStr [in] - string to replace with, must not contain "!"
::          File   [in] - file to be parsed
set "param1=%~1"
set "param2=%~2"
if defined param1 set "param1=%param1:""="%"
if defined param2 set "param2=%param2:""="%"
if "%~1"=="" findstr "^::" "%~f0"&GOTO:EOF
for /f "delims=" %%A in ('"findstr /n ^^ %3"') do (
   set "line=%%A"
   setlocal EnableDelayedExpansion

   set "line=!line:*:=!"
   if defined line (
      set "line=!line:%param1%=%param2%!"
      (echo(!line!)
   ) ELSE echo(
   endlocal
)