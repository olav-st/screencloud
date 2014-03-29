set version=0.0.0
set update_channel=windows
set arch=x86

if not exist BatchSubstitute.bat (
	echo "This script requires BatchSubstitute.bat"
	pause
	exit
)

ECHO WScript.Echo InputBox( "Enter version number", "versionNumberInput", "" ) >usermessage.vbs
FOR /F "tokens=*" %%A IN ('CSCRIPT.EXE //NoLogo usermessage.vbs') DO SET versionNumberInput=%%A
set version=%versionNumberInput%
DEL usermessage.vbs

ECHO WScript.Echo InputBox( "Enter update channel", "updateChannelInput", "windows" )>usermessage.vbs
FOR /F "tokens=*" %%A IN ('CSCRIPT.EXE //NoLogo usermessage.vbs') DO SET updateChannelInput=%%A
set update_channel=%updateChannelInput%
DEL usermessage.vbs

::del ScreenCloud\ScreenCloud.exe
::copy ..\..\..\Screencloud-build-desktop-Qt_4_7_4_for_Desktop_-_MinGW_4_4__Qt_SDK__Release\release\ScreenCloud.exe ScreenCloud\ScreenCloud.exe

::Strip all binaries
cd bin
print "Stripping binaries..."
strip --strip-unneeded libPythonQt.dll
strip --strip-unneeded screencloud.exe
cd ..
::Set the version number in the wix file
copy wix\ScreenCloud.wxs wix\ScreenCloud.wxs.backup
CALL BatchSubstitute.bat "VERSIONNUMBERNOTSET" %version% wix\ScreenCloud.wxs 1> wix\ScreenCloud.wxs.temp
move wix\ScreenCloud.wxs.temp wix\ScreenCloud.wxs
cd wix
::Build installer
candle.exe ScreenCloud.wxs -ext WixUIExtension -ext WixUtilExtension
light.exe ScreenCloud.wixobj -ext WixUIExtension -ext WixUtilExtension
cd ..
::Unset the version number
CALL BatchSubstitute.bat "%version%" VERSIONNUMBERNOTSET wix\ScreenCloud.wxs 1> wix\ScreenCloud.wxs.temp
move wix\ScreenCloud.wxs.temp wix\ScreenCloud.wxs

mkdir installers\%update_channel%\%version%
copy wix\ScreenCloud.msi installers\%update_channel%\%version%\ScreenCloud-%version%-%arch%.msi
echo "Finished building installer"
