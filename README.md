Windows X-server based on the xorg git sources (like Xming or Cygwin's XWin).

This repository is the BanchoXterm-maintained fork of
[marchaesen/vcxsrv](https://github.com/marchaesen/vcxsrv). The upstream project
is still the source of the Windows X server; this fork adds a reproducible
ARM64 build and standalone packaging for BanchoXterm.

## Differences from upstream

- Adds MSVC ARM64 build support for VcXsrv and its required libraries.
- Updates the build scripts and project files for ARM64 output directories,
  OpenSSL's `VC-WIN64-ARM` target, ARM64 FreeType, Mesa and X.Org components.
- Fixes Cygwin/Windows environment handling for MSVC `INCLUDE`, `LIB` and
  `LIBPATH` variables.
- Adds ARM64-safe generated-file and resource paths, including the X.Org
  `ETCX11DIR` fallback used by the standalone server.
- Provides a portable ARM64 package workflow. BanchoXterm consumes the
  resulting ZIP as an external companion process; it does not compile or link
  VcXsrv.

The fork does not change the X11 protocol or BanchoXterm's application code.
Changes are kept in Git commits so they can be compared with and rebased onto
the upstream project.

Branches:

- released: contains original sources of all used packages.
- master: contains all necessary changes to be able to compile with Visual Studio. From this branch the binary releases are built.

Currently the legacy compilation scripts assume they are run from a WSL/Cygwin
terminal inside a Windows folder (because a case-insensitive filesystem is
needed). The GitHub Actions workflow documents the supported automated build
and publishes a standalone ZIP.

## Standalone ARM64 package

The workflow produces `vcxsrv-windows-arm64.zip`. It contains `vcxsrv.exe`,
the ARM64 DLLs, XKB data, locale data, bitmaps, fonts and the files required by
the X server. Extract the ZIP and place the resulting directory under
`xservers/vcxsrv-arm64/` in a BanchoXterm package.

The package is intentionally separate from BanchoXterm. This keeps the X
server lifecycle and its licenses independent from the BanchoXterm executable.
