
CC = gcc
CFLAGS = -O -fomit-frame-pointer -fcombine-regs -finline-functions

OBJS = complete.o editline.o sysunix.o

libeditline.a: $(OBJS)
	oar -c $@ $(OBJS)

complete.o: complete.c editline.h unix.h config.h
	$(CC) $(CFLAGS) -c complete.c

editline.o: editline.c editline.h unix.h config.h
	$(CC) $(CFLAGS) -c editline.c

sysunix.o: sysunix.c editline.h unix.h config.h
	$(CC) $(CFLAGS) -c sysunix.c



