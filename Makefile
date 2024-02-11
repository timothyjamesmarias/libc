string: string.o
	clang string.o -o string

string.o: string.c
	clang -c -std=c17 -shared string.c -o string.o

clean:
	make clean_string

clean_string:
	rm string string.o
