all: main_stack main_queue

main_stack: mm.o main_stack.o
	gcc -Wall -o main_stack mm.o main_stack.o
	
main_queue: mm.o main_queue.o
	gcc -Wall -o main_queue mm.o main_queue.o
	
mm.o:
	gcc -Wall -c mm.c
	
main_stack.o:
	gcc -Wall -c main_stack.c

main_queue.o:
	gcc -Wall -c main_queue.c
	
dep:
	echo "Do nothing"

clean:
	rm -f mm list list_ptr stack stack_ptr main_stack queue queue_ptr main_queue *.o *~*.*~
