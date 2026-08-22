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
	cd $(DESTDIR) & $(XKBCOMP_HOST) -lfhlpR -o $(relpath $@) *
endif
