package OpenSSL::safe::installdata;

use strict;
use warnings;
use Exporter;
our @ISA = qw(Exporter);
our @EXPORT = qw(
    @PREFIX
    @libdir
    @BINDIR @BINDIR_REL_PREFIX
    @LIBDIR @LIBDIR_REL_PREFIX
    @INCLUDEDIR @INCLUDEDIR_REL_PREFIX
    @APPLINKDIR @APPLINKDIR_REL_PREFIX
    @ENGINESDIR @ENGINESDIR_REL_LIBDIR
    @MODULESDIR @MODULESDIR_REL_LIBDIR
    @PKGCONFIGDIR @PKGCONFIGDIR_REL_LIBDIR
    @CMAKECONFIGDIR @CMAKECONFIGDIR_REL_LIBDIR
    $VERSION @LDLIBS
);

our @PREFIX                     = ( 'C:\Users\dkant\Source\banchoxterm\build\vcxsrv-arm64-src\openssl\arm64' );
our @libdir                     = ( 'C:\Users\dkant\Source\banchoxterm\build\vcxsrv-arm64-src\openssl\arm64' );
our @BINDIR                     = ( 'C:\Users\dkant\Source\banchoxterm\build\vcxsrv-arm64-src\openssl\arm64\apps' );
our @BINDIR_REL_PREFIX          = ( 'apps' );
our @LIBDIR                     = ( 'C:\Users\dkant\Source\banchoxterm\build\vcxsrv-arm64-src\openssl\arm64' );
our @LIBDIR_REL_PREFIX          = ( '' );
our @INCLUDEDIR                 = ( 'C:\Users\dkant\Source\banchoxterm\build\vcxsrv-arm64-src\openssl\arm64\include', 'C:\Users\dkant\Source\banchoxterm\build\vcxsrv-arm64-src\openssl\include' );
our @INCLUDEDIR_REL_PREFIX      = ( 'include', '../include' );
our @APPLINKDIR                 = ( 'C:\Users\dkant\Source\banchoxterm\build\vcxsrv-arm64-src\openssl\arm64\ms' );
our @APPLINKDIR_REL_PREFIX      = ( 'ms' );
our @ENGINESDIR                 = ( 'C:\Users\dkant\Source\banchoxterm\build\vcxsrv-arm64-src\openssl\arm64\engines' );
our @ENGINESDIR_REL_LIBDIR      = ( 'engines' );
our @MODULESDIR                 = ( 'C:\Users\dkant\Source\banchoxterm\build\vcxsrv-arm64-src\openssl\arm64\providers' );
our @MODULESDIR_REL_LIBDIR      = ( 'providers' );
our @PKGCONFIGDIR               = ( 'C:\Users\dkant\Source\banchoxterm\build\vcxsrv-arm64-src\openssl\arm64' );
our @PKGCONFIGDIR_REL_LIBDIR    = ( '.' );
our @CMAKECONFIGDIR             = ( 'C:\Users\dkant\Source\banchoxterm\build\vcxsrv-arm64-src\openssl\arm64' );
our @CMAKECONFIGDIR_REL_LIBDIR  = ( '.' );
our $VERSION                    = '3.4.1';
our @LDLIBS                     =
    # Unix and Windows use space separation, VMS uses comma separation
    $^O eq 'VMS'
    ? split(/ *, */, 'onecore.lib ')
    : split(/ +/, 'onecore.lib ');

1;
