CC = gcc

all: main

main: main.c
	$(CC) main.c -o bin/main
	./bin/main bin/test.txt
run:
	./bin/main bin/test.txt
clean:
	rm -f bin/main
