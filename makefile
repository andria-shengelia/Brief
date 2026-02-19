CC = gcc

all: main

main: main.c
	$(CC) main.c -o bin/main
	./bin/main main.c
run:
	./bin/main main.c
clean:
	rm -f bin/main
