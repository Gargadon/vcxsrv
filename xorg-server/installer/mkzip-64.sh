VERSION="21.1.10.0"
OutFile="vcxsrv-64.${VERSION}.portable.tar"

# Some auxiliary X applications are not built by every configuration.  Add
# them only when their output exists so packaging can still produce the core
# VcXsrv archive.
add_if_present() {
  local dir="$1"
  local file="$2"
  if [ -f "$dir/$file" ]; then
    tar -rf "$OutFile" -C "$dir" "$file"
  else
    echo "Skipping missing optional file: $dir/$file"
  fi
}

rm -f $OutFile
rm -f $OutFile.gz

tar -cf $OutFile -C ../obj64/servrelease vcxsrv.exe
tar -rf $OutFile -C ../dix protocol.txt
tar -rf $OutFile -C .. system.XWinrc
tar -rf $OutFile -C .. X0.hosts
tar -rf $OutFile -C ../../xkbcomp/obj64/release xkbcomp.exe
add_if_present ../../apps/xhost/obj64/release xhost.exe
add_if_present ../../apps/xrdb/obj64/release xrdb.exe
add_if_present ../../apps/xauth/obj64/release xauth.exe
add_if_present ../../apps/xcalc/obj64/release xcalc.exe
add_if_present ../../apps/xcalc/app-defaults xcalc
add_if_present ../../apps/xcalc/app-defaults xcalc-color
add_if_present ../../apps/xclock/obj64/release xclock.exe
add_if_present ../../apps/xclock/app-defaults xclock
add_if_present ../../apps/xclock/app-defaults xclock-color
add_if_present ../../apps/xwininfo/obj64/release xwininfo.exe
tar -rf $OutFile -C .. XKeysymDB
tar -rf $OutFile -C ../.. libX11/src/XErrorDB
tar -rf $OutFile -C ../.. libX11/src/xcms/Xcms.txt
tar -rf $OutFile -C .. XtErrorDB
tar -rf $OutFile -C .. font-dirs
tar -rf $OutFile -C .. .Xdefaults
add_if_present ../hw/xwin/xlaunch/obj64/release xlaunch.exe
add_if_present ../../tools/plink/obj64/release plink.exe
tar -rf $OutFile -C ../../mesalib/src/obj64/release swrast_dri.dll
tar -rf $OutFile -C ../hw/xwin/swrastwgl_dri/obj64/release swrastwgl_dri.dll
add_if_present ../../dxtn/obj64/release dxtn.dll
tar -rf $OutFile -C ../../libxml2/bin64 libxml2-2.dll
tar -rf $OutFile -C ../../libxml2/bin64 libgcc_s_sjlj-1.dll
tar -rf $OutFile -C ../../libxml2/bin64 libiconv-2.dll
tar -rf $OutFile -C ../../libxml2/bin64 libwinpthread-1.dll
tar -rf $OutFile -C ../../zlib/obj64/release zlib1.dll
tar -rf $OutFile -C ../../libxcb/src/obj64/release libxcb.dll
tar -rf $OutFile -C ../../libXau/obj64/release libXau.dll
tar -rf $OutFile -C ../../libX11/obj64/release libX11.dll
add_if_present ../../libXext/src/obj64/release libXext.dll
add_if_present ../../libXmu/src/obj64/release libXmu.dll
tar -rf $OutFile -C ../../openssl/release64 libcrypto-3-x64.dll
tar -rf $OutFile -C ../../freetype/objs/x64/Release freetype.dll
tar -rf $OutFile vcruntime140.dll
tar -rf $OutFile vcruntime140_1.dll
tar -rf $OutFile msvcp140.dll
tar -rf $OutFile -C .. xkbdata
tar -rf $OutFile -C .. locale
tar -rf $OutFile -C .. bitmaps
tar -rf $OutFile -C .. fonts

gzip $OutFile
