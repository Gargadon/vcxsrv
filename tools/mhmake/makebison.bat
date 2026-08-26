@echo off
setlocal

set BISON_PKGDATADIR=src/bisondata

if defined CYGWIN_ROOT (
  "%CYGWIN_ROOT%\bin\bison.exe" -d -Ssrc/bisondata/skeletons/lalr1.cc -o%1/mhmakeparser.cpp src\mhmakeparser.y
) else (
  bison.exe -d -Ssrc/bisondata/skeletons/lalr1.cc -o%1/mhmakeparser.cpp src\mhmakeparser.y
)
python.exe addstdafxh.py %1\mhmakeparser.cpp

endlocal
