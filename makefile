CC = gcc

all: main

main: main.c
	$(CC) main.c -o bin/main
	./bin/main 
run:
	./bin/main

clean:
	rm -f bin/main
