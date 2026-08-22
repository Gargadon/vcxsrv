LIBRARY = libpixman-1

INCLUDES += $(OBJDIR)

CSRCS =			\
	pixman.c			\
	pixman-access.c			\
	pixman-access-accessors.c	\
	pixman-bits-image.c		\
	pixman-combine32.c		\
	pixman-combine-float.c		\
	pixman-conical-gradient.c	\
	pixman-x86.c			\
	pixman-mips.c			\
	pixman-arm.c			\
	pixman-ppc.c			\
	pixman-edge.c			\
	pixman-edge-accessors.c		\
	pixman-fast-path.c		\
	pixman-glyph.c			\
	pixman-general.c		\
	pixman-gradient-walker.c	\
	pixman-image.c			\
	pixman-implementation.c		\
	pixman-linear-gradient.c	\
	pixman-matrix.c			\
	pixman-noop.c			\
	pixman-radial-gradient.c	\
	pixman-region16.c		\
	pixman-region32.c		\
	pixman-solid-fill.c		\
	pixman-timer.c			\
	pixman-trap.c			\
	pixman-utils.c			\
	pixman-riscv.c			\
	$(NULL)

## mmx code
ifneq ($(IS64),1)
CSRCS += pixman-mmx.c
DEFINES+=USE_X86_MMX
endif

# sse2 code (x86/x64 only; ARM64 uses the generic implementation)
ifeq ($(ARM64),1)
DEFINES+=PIXMAN_API=
else
CSRCS += pixman-sse2.c
DEFINES+=USE_SSE2 PIXMAN_API=
endif
