#
# Makefile
# CS50
#

all: find generate

find: find.c helpers.c helpers.h
	gcc  -Wall -std=gnu99 -Werror -o find cs50.c find.c helpers.c -lm

generate: generate.c
	gcc -O0 -std=gnu99 -Wall -Werror -o generate generate.c

clean:
	rm -f *.o a.out core find generate
