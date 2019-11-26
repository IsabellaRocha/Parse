all: Parse.o
	-o program Parse.o

Parse.o: Parse.c
	-c Parse.c

run:
	./program

clean:
	rm *.o
