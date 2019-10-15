all: vexillology.o main.o
	gcc -o program vexillology.c main.c

main.o: main.c vexillology.h
	gcc -c main.c

vexillology.o: vexillology.c vexillology.h
	gcc -c vexillology.c

run:
	./program
