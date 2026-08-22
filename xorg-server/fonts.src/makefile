SUBDIRS=font-util 75dpi 100dpi cyrillic encodings misc OTF Speedo TTF Type1 terminus-font
ifeq ($(ARM64),1)
SUBDIRS=
endif

ifeq ($(ARM64),1)
BDFTOPCF=$(MHMAKECONF)\hosttools\bdftopcf.exe
endif

DESTDIR=$(MHMAKECONF)\xorg-server\fonts

all: $(DESTDIR)\fonts.conf

$(DESTDIR)\fonts.conf: $(DESTDIR) fonts.conf
	copy fonts.conf $@
