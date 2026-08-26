@echo off
setlocal

if defined CYGWIN_ROOT (
  "%CYGWIN_ROOT%\bin\flex.exe" --nounistd -Ssrc/flex.skl -o%1/mhmakelexer.cpp src/mhmakelexer.l
) else (
  flex.exe --nounistd -Ssrc/flex.skl -o%1/mhmakelexer.cpp src/mhmakelexer.l
)

python.exe addstdafxh.py %1\mhmakelexer.cpp

endlocal

