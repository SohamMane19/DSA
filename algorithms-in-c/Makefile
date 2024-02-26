CC = gcc
CFLAGS = -Wall -Wextra -g

.PHONY: all clean

# Get all .c files in the directory (excluding Makefile and *.o files)
SRCS := $(wildcard *.c)
PROGS := $(patsubst %.c,%,$(SRCS))

all:
	$(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<
	./$@
clean:
	rm -f $(PROGS)
