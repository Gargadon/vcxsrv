@echo off
setlocal

set BISON_PKGDATADIR=src/bisondata

win_bison.exe -d -Ssrc/bisondata/skeletons/lalr1.cc -o%1/mhmakeparser.cpp src\mhmakeParser.y
python.exe addstdafxh.py %1\mhmakeparser.cpp

endlocal
