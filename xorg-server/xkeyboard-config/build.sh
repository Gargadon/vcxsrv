#!/usr/bin/env bash
set -e
prefix=$(cygpath -w "$(cd ../xkbdata && pwd)")
python.exe -m mesonbuild.mesonmain setup -Dxorg-rules-copy=true --prefix="$prefix" builddir
python.exe -m mesonbuild.mesonmain compile -C builddir
python.exe -m mesonbuild.mesonmain install -C builddir

