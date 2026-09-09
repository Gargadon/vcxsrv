#!/bin/bash
set -e

VERSION="21.1.16.1"
OUTFILE="vcxsrv-arm64.${VERSION}.portable.tar"

rm -f "$OUTFILE" "$OUTFILE.gz"

add() { tar -rf "$OUTFILE" "$@"; }
add_if_present() {
  local dir="$1"
  local file="$2"
  if [ -f "$dir/$file" ]; then
    add -C "$dir" "$file"
  else
    echo "Skipping missing optional file: $dir/$file"
  fi
}
add_dir_if_present() {
  local dir="$1"
  local name="$2"
  if [ -d "$dir/$name" ]; then
    add -C "$dir" "$name"
  else
    echo "Skipping missing optional directory: $dir/$name"
  fi
}

tar -cf "$OUTFILE" -C ../objARM64/servrelease vcxsrv.exe
add -C ../dix protocol.txt
add -C .. system.XWinrc X0.hosts XKeysymDB XtErrorDB font-dirs .Xdefaults
add -C ../../xkbcomp/objARM64/release xkbcomp.exe
add -C ../../mesalib/src/objARM64/release swrast_dri.dll
add -C ../hw/xwin/swrastwgl_dri/objARM64/release swrastwgl_dri.dll
add -C ../../libX11/src XErrorDB xcms/Xcms.txt
add -C ../../zlib/objARM64/release zlib1.dll
add -C ../../libxcb/src/objARM64/release libxcb.dll
add -C ../../libXau/objARM64/release libXau.dll
add -C ../../libX11/objARM64/release libX11.dll
add_if_present ../../libXext/src/objARM64/release libXext.dll
add_if_present ../../libXmu/src/objARM64/release libXmu.dll
add -C ../../openssl/arm64 libcrypto-3-arm64.dll libssl-3-arm64.dll
add -C ../../freetype/objs/ARM64/Release freetype.dll
add vcruntime140.dll vcruntime140_1.dll msvcp140.dll
add_dir_if_present .. xkbdata
add -C .. locale bitmaps fonts

gzip -f "$OUTFILE"
