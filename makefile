program: main.o list.o
	gcc -o program main.o list.o
main.o: main.c list.h
	gcc -c main.c list.h
list.o: list.c list.h
	gcc -c list.c list.h
clean:
	rm *.o
backup:
	cp *.c ./backup 

