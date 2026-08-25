#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

add_strawberry_perl() {
  local perl_exe perl_path perl_dir
  perl_exe=$(cmd.exe /c where perl.exe 2>/dev/null | tr -d '\r' | grep -i strawberry | head -n 1)
  if [[ -n "$perl_exe" ]]; then
    perl_path=$(cygpath -u "$perl_exe")
    perl_dir=$(dirname "$perl_path")
    export PATH="$perl_dir:$PATH"
    export PERL_NATIVE="$perl_path"
  fi
}

add_strawberry_perl
if [[ -z "$PERL_NATIVE" ]]; then
  echo 'Strawberry Perl was not found through where.exe' >&2
  exit 1
fi

rm -f commands.sh
python setenv.py $1 > commands.sh
# The upstream script targets WSL and emits /mnt/c paths. This build runs in
# Cygwin, whose Windows mount prefix is /cygdrive/c.
sed -i 's#/mnt/c#/cygdrive/c#g' commands.sh
chmod +x commands.sh
source commands.sh
add_strawberry_perl
JOM_DIR=/cygdrive/c/Qt/Tools/QtCreator/bin/jom
if [[ -d "$JOM_DIR" ]]; then
  export PATH="$JOM_DIR:$PATH"
fi
if [[ -d /cygdrive/c/Strawberry/perl/bin ]]; then
  export PATH="/cygdrive/c/Strawberry/perl/bin:$PATH"
fi
export PATH="$DIR/tools/mhmake:/usr/local/bin:/usr/local/sbin:/usr/sbin:/usr/bin:/sbin:/bin:$DIR/tools/mhmake/Release64:$PATH:/cygdrive/c/gnuwin32/bin"
rm -f commands.sh
export MHMAKECONF=$(cygpath -w "$DIR")
if [[ -z "$PYTHON3" ]]; then
  if [[ -x /cygdrive/c/Python39/python.exe ]]; then
    export PYTHON3=$(cygpath -w /cygdrive/c/Python39/python.exe)
  else
    export PYTHON3=$(cygpath -w "$(command -v python.exe)")
  fi
fi
export IS64=$1
TARGET_ARCH="${2:-arm64}"
if [[ "$TARGET_ARCH" == "arm64" ]]; then
  export ARM64=1
else
  unset ARM64
fi

export CFLAGS="-FS"
export WSLENV="$WSLENV:MHMAKECONF/l:PYTHON3/l:IS64/l:ARM64/l:CFLAGS/l"
