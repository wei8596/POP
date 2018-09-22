all: main_stack main_queue

main_stack: mm.o list.o stack.o main_stack.o
	gcc -Wall -o main_stack mm.o list.o stack.o main_stack.o
	
main_queue: mm.o list.o queue.o main_queue.o
	gcc -Wall -o main_queue mm.o list.o queue.o main_queue.o
	
mm.o:
	gcc -Wall -c mm.c
	
list.o:
	gcc -Wall -c list.c

stack.o:
	gcc -Wall -c stack.c

main_stack.o:
	gcc -Wall -c main_stack.c

queue.o:
	gcc -Wall -c queue.c

main_queue.o:
	gcc -Wall -c main_queue.c
	
dep:
	echo "Do nothing"

clean:
	rm -f mm list stack main_stack queue main_queue *.o *~*.*~
