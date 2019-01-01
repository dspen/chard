CFLAGS=-Wall -g
CC = gcc

num=15
clean:
	rm -f ex$(num)
all:
	rm -f ex$(num)
	make ex$(num)
	./ex$(num)

run:
	./ex$(num)
	# $(CC) $CFLAGS $@.c -o $@
	# make $@
