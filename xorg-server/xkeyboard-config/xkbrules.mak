DIRFILE=$(THISDIR:%=$(DESTDIR)\..\%.dir)

.PHONY: destdir
destdir: $(DESTDIR)

all: $(DIRFILE)

ifneq ($(DIRFILE),)
#bdftopcf is dependent on libX11.dll, so we need to add the directory of the libX11 dll to the path env variable
PATH:=$(relpath $(MHMAKECONF)\libxcb\src\$(OBJDIR))\;$(relpath $(MHMAKECONF)\libX11\$(OBJDIR))\;$(relpath $(MHMAKECONF)\libXau\$(OBJDIR))\;$(PATH)
export PATH

ifeq ($(ARM64),1)
XKBCOMP_HOST=$(MHMAKECONF)\hosttools\xkbcomp.exe
else
XKBCOMP_HOST=..\..\..\xkbcomp\$(NOSERVOBJDIR)\xkbcomp.exe
load_makefile ..\..\..\xkbcomp\makefile MAKESERVER=0 DEBUG=$(DEBUG)
endif

$(DIRFILE): $(XKBCOMP_HOST)
	mkdir -p $(DESTDIR)
	-del -e $@
	bash -lc "export PATH=\"$$(cygpath -u '$(subst \,/,$(MHMAKECONF))/libxcb/src/$(subst \,/,$(OBJDIR))'):$$(cygpath -u '$(subst \,/,$(MHMAKECONF))/libX11/$(subst \,/,$(OBJDIR))'):$$(cygpath -u '$(subst \,/,$(MHMAKECONF))/libXau/$(subst \,/,$(OBJDIR))'):$$PATH\" && cd '$(subst \,/,$(MHMAKECONF))/xorg-server/xkeyboard-config/$(subst \,/,$(THISDIR))' && find . -maxdepth 1 -type f ! -name makefile -printf '%f*\\0' | xargs -0 '$(subst \,/,$(XKBCOMP_HOST))' -lfhlpR -o '$(subst \,/,$(relpath $@))'"
endif
