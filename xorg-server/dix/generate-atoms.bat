@echo off
setlocal
C:\cygwin64\bin\bash.exe -lc "cd /cygdrive/c/Users/dkant/Source/banchoxterm/build/vcxsrv-arm64-src/xorg-server/dix && sed 's/\r$//' generate-atoms | bash -s -- BuiltInAtoms initatoms.c"
endlocal
