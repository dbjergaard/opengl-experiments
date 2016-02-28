CC=gcc
INCDIR=$(PWD)/include
WFLAGS= -Wextra -Wall -Wpedantic
CFLAGS=$(WFLAGS) -std=c99 -I$(INCDIR) 
BINS:=$(patsubst %.c,%,$(wildcard bin/*.c))
BINOBJ:=$(patsubst %.c,%.o,$(wildcard bin/*.c)) 
LDFLAGS=-lpng

CSRC = $(wildcard src/*.c)
OBJ = $(CSRC:.c=.o)

all: $(BINS)
bin/%: bin/%.o $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
