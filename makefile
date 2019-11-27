all: Parse.o
	gcc -o program Parse.o

Parse.o: Parse.c
	gcc -c Parse.c

run:
	./program

clean:
	rm *.o
	rm *.exe
	rm *.exe.stackdump
