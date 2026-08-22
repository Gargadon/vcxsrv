@echo off
setlocal

cd "%~dp0"

C:\cygwin64\bin\bash.exe -lc "cd /cygdrive/c/Users/dkant/Source/banchoxterm/build/vcxsrv-arm64-src/xorg-server/hw/xwin && export BISON_PKGDATADIR='C:\\Users\\dkant\\Source\\banchoxterm\\build\\vcxsrv-arm64-src\\tools\\mhmake\\data' && /cygdrive/c/Users/dkant/Source/banchoxterm/build/vcxsrv-arm64-src/tools/mhmake/win_bison.exe -d -o%1/winprefsyacc.c winprefsyacc.y && /cygdrive/c/Users/dkant/Source/banchoxterm/build/vcxsrv-arm64-src/tools/mhmake/win_flex.exe -i -o%1/winprefslex.c winprefslex.l"

endlocal

