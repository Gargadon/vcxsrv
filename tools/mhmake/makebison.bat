@echo off
setlocal

set BISON_PKGDATADIR=src/bisondata

if defined WIN_BISON_PATH (
  "%WIN_BISON_PATH%" -d -Ssrc/bisondata/skeletons/lalr1.cc -o%1/mhmakeparser.cpp src\mhmakeparser.y
) else (
  win_bison.exe -d -Ssrc/bisondata/skeletons/lalr1.cc -o%1/mhmakeparser.cpp src\mhmakeparser.y
)
python.exe addstdafxh.py %1\mhmakeparser.cpp

endlocal
