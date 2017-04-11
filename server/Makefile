#
# Makefile
#
# Computer Science 50
# Problem Set 6
#

server: server.c Makefile
	gcc -O0 -std=c11 -Wall -Werror -o server helpers.c server.c -lm

clean:
	rm -f *.o core server
