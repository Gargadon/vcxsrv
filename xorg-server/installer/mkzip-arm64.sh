#!/bin/bash
set -e

VERSION="21.1.16.1"
OUTFILE="vcxsrv-arm64.${VERSION}.portable.tar"

rm -f "$OUTFILE" "$OUTFILE.gz"

add() { tar -rf "$OUTFILE" "$@"; }

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
add -C ../../libX11/src/objARM64/release libX11.dll
add -C ../../libXext/src/objARM64/release libXext.dll
add -C ../../libXmu/src/objARM64/release libXmu.dll
add -C ../../openssl/arm64 libcrypto-3-arm64.dll libssl-3-arm64.dll
add -C ../../freetype/objs/ARM64/Release freetype.dll
add -C .. xkbdata locale bitmaps fonts

gzip -f "$OUTFILE"
