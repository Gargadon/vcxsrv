INCLUDELIBFILES = $(MHMAKECONF)\libX11\$(OBJDIR)\libX11.lib \
                  $(MHMAKECONF)\libxcb\src\$(OBJDIR)\libxcb.lib \
                  $(MHMAKECONF)\libXau\$(OBJDIR)\libXau.lib \
                  $(MHMAKECONF)\libxkbfile\src\$(OBJDIR)\libxkbfile.lib

LIBDIRS=$(dir $(INCLUDELIBFILES))

load_makefile $(LIBDIRS:%$(OBJDIR)\=%makefile MAKESERVER=0 DEBUG=$(DEBUG);)

ifeq $(DEBUG),1
TTYAPP = xkbcomp
else
WINAPP = xkbcomp
endif

DEFINES += DFLT_XKB_CONFIG_ROOT="\".\""  PACKAGE_VERSION="\"1.2.3\""

INCLUDES += $(OBJDIR)

CSRCS = action.c \
        alias.c \
        compat.c \
        expr.c \
        geometry.c \
        indicators.c \
        keycodes.c \
        keymap.c \
        keytypes.c \
        listing.c \
        misc.c \
        parseutils.c \
        symbols.c \
        utils.c \
        vmod.c \
        xkbcomp.c \
        xkbparse.c \
        xkbpath.c \
        xkbscan.c

LINKLIBS += $(PTHREADLIB) $(FREETYPELIB) $(OPENSSLLIB)

$(OBJDIR)\xkbparse.c: xkbparse.y
	bison.bat -d -o$(OBJDIR)\xkbparse.c $<

# Bison emits the header as a side effect of generating xkbparse.c. Keep this
# as a separate dependency so parallel mhmake builds wait for the generated
# source before compiling xkbparse.obj.
$(OBJDIR)\xkbparse.h: $(OBJDIR)\xkbparse.c
