all: coords.o main.o
	gcc -o program coords.c main.c

main.o: main.c coords.h
	gcc -c main.c

coords.o: coords.c coords.h
	gcc -c coords.c

run:
	./program
