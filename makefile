CC = gcc
CFLAGS = -Wall

all: main

main: main.c
	run main.c 
	rm -f main

clean:
	rm -f main
