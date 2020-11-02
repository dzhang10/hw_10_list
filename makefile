all: main.o item.o
	gcc -o program main.o item.o

main.o: item.h
	gcc -c main.c;

item.o: item.c item.h
	gcc -c item.c

run:
	./program

clean:
	rm *.o
