::Default values
set version="0.0.0"
set update_channel=windows
set arch=x86

if not "%1"=="" (
	set version=%1
)
if not "%2"=="" (
	set update_channel=%2
)
if not "%3"=="" (
	set arch=%3
)
if "%arch%"=="Win32" (
    set arch=x86
)

where /q candle || ECHO Cound not find candle.exe from wix. Needs to be in your PATH. && EXIT /B
where /q light || ECHO Cound not find light.exe from wix. Needs to be in your PATH. && EXIT /B
where /q heat || ECHO Cound not find heat.exe from wix. Needs to be in your PATH. && EXIT /B

::Rename OpenSSL DLLs if we're building for x64
if "%arch%"=="x64" (
    move libcrypto-1_1.dll libcrypto-1_1-x64.dll
	move libssl-1_1.dll libssl-1_1-x64.dll
	move DLLs/libcrypto-1_1.dll DLLs/libcrypto-1_1-x64.dll
	move DLLs/libssl-1_1.dll DLLs/libssl-1_1-x64.dll
)

cd wix
::Use heat to include directories
heat dir ..\DLLs -o DLLs.wxs -scom -frag -srd -sreg -gg -cg PY_DLLS -dr PY_DLLS -var var.PDSourceDir
heat dir ..\modules -o modules.wxs -scom -frag -srd -sreg -gg -cg PY_MODULES -dr PY_MODULES -var var.PMSourceDir
::Build installer
candle.exe ScreenCloud.wxs DLLs.wxs modules.wxs -arch %arch% -dProductFullVersion=%version% -dPlatform=%arch% -dPDSourceDir=..\DLLs -dPMSourceDir=..\modules -ext WixUIExtension -ext WixUtilExtension
light.exe ScreenCloud.wixobj DLLs.wixobj modules.wixobj -o ScreenCloud.msi -ext WixUIExtension -ext WixUtilExtension
cd ..

mkdir installers\%update_channel%\%version%
copy wix\ScreenCloud.msi installers\%update_channel%\%version%\ScreenCloud-%version%-%arch%.msi
copy wix\ScreenCloud.msi ScreenCloud-%version%-%arch%.msi
echo "Finished building installer"
exit
