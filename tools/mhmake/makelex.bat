@echo off
setlocal

win_flex.exe --nounistd -Ssrc/flex.skl -o%1/mhmakelexer.cpp src/mhmakelexer.l

python.exe addstdafxh.py %1\mhmakelexer.cpp

endlocal

