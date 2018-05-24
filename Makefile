CFLAGS=-Wall -g
CC = gcc

num=11
clean:
	rm -f ex$(num)
all:
	make ex$(num)

run:
	./ex$(num)
	# $(CC) $CFLAGS $@.c -o $@
	# make $@
