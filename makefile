all: Parse.c
	gcc -o program Parse.c

run:
	./program

clean:
	rm *.exe
	rm *.exe.stackdump
