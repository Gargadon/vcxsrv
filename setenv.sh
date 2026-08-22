#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

rm -f commands.sh
python setenv.py $1 > commands.sh
# The upstream script targets WSL and emits /mnt/c paths. This build runs in
# Cygwin, whose Windows mount prefix is /cygdrive/c.
sed -i 's#/mnt/c#/cygdrive/c#g' commands.sh
chmod +x commands.sh
source commands.sh
if [[ "$1" == "1" ]] ; then
export PATH=/cygdrive/c/Strawberry/perl/bin:/cygdrive/c/Qt/Tools/QtCreator/bin/jom:/cygdrive/c/Program\ Files/Microsoft\ Visual\ Studio/18/Community/VC/Tools/MSVC/14.51.36231/bin/HostX64/arm64:$DIR/tools/mhmake:/usr/local/bin:/usr/local/sbin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/lib/wsl/lib:$DIR/tools/mhmake/Release64:$PATH:/cygdrive/c/gnuwin32/bin
else
export PATH=/cygdrive/c/Strawberry/perl/bin:/cygdrive/c/Qt/Tools/QtCreator/bin/jom:/cygdrive/c/Program\ Files/Microsoft\ Visual\ Studio/18/Community/VC/Tools/MSVC/14.51.36231/bin/HostX64/arm64:$DIR/tools/mhmake:/usr/local/bin:/usr/local/sbin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/lib/wsl/lib:$DIR/tools/mhmake/Release:$PATH:/cygdrive/c/gnuwin32/bin
fi
rm -f commands.sh
export MHMAKECONF=$(cygpath -w "$DIR")
export PYTHON3=$(cygpath -w /cygdrive/c/Python39/python.exe)
export IS64=$1
export ARM64=1

export CFLAGS="-FS"
export WSLENV="$WSLENV:MHMAKECONF/l:PYTHON3/l:IS64/l:ARM64/l:CFLAGS/l"
