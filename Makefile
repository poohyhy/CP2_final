CC=gcc
CFLAGS=-Wall
EXE_FILES=5 6 7 8 9
SRC_FILES=5.c 6.c 7.c 8.c 9.c

all:	$(EXE_FILES)

5:  5.c
6:  6.c
7:	7.c
8:	8.c
9:	9.c

clean :
	rm $(EXE_FILES)