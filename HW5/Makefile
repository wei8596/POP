all: _test

_test: mm.o mm_debug.o test.o
	gcc -Wall -o _test mm.o mm_debug.o test.o
	
mm.o:
	gcc -Wall -c mm.c

mm_debug.o:
	gcc -Wall -c mm_debug.c

test.o:
	gcc -Wall -c test.c
	
dep:
	echo "Do nothing"

clean:
	rm -f mm mm_debug _test test *.o *~*.*~
