/*
test the queue module
*/
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "queue_ptr.h"

void charQueue();
void shortQueue();
void intQueue();
void longQueue();
void floatQueue();
void doubleQueue();
void charPtrQueue();
void shortPtrQueue();
void intPtrQueue();
void longPtrQueue();
void floatPtrQueue();
void doublePtrQueue();

int main(void) {
    int select;
	
    printf("0.char\n"
           "1.short\n"
           "2.int\n"
           "3.long\n"
           "4.float\n"
           "5.double\n"
           "6.pointer to char\n"
           "7.pointer to short\n"
           "8.pointer to int\n"
           "9.pointer to long\n"
           "10.pointer to float\n"
           "11.pointer to double\n\n");
		   
    while (scanf(" %d", &select) != EOF) {
		switch(select)
		{
			case 0:
				charQueue();
				break;
			case 1:
				shortQueue();
				break;
			case 2:
				intQueue();
				break;
			case 3:
				longQueue();
				break;
			case 4:
				floatQueue();
				break;
			case 5:
				doubleQueue();
				break;
			case 6:
				charPtrQueue();
				break;
			case 7:
				shortPtrQueue();
				break;
			case 8:
				intPtrQueue();
				break;
			case 9:
				longPtrQueue();
				break;
			case 10:
				floatPtrQueue();
				break;
			case 11:
				doublePtrQueue();
				break;
		}
		printf("0.char\n"
           "1.short\n"
           "2.int\n"
           "3.long\n"
           "4.float\n"
           "5.double\n"
           "6.pointer to char\n"
           "7.pointer to short\n"
           "8.pointer to int\n"
           "9.pointer to long\n"
           "10.pointer to float\n"
           "11.pointer to double\n\n");
	}

    return 0;
}

void charQueue() {
	char value;
	struct TEMPLATE(node, char) *front = NULL, *rear = NULL, *temp;
    
	printf("Please enter the value(char)\n");
	scanf(" %c", &value);
	TEMPLATE(enqueue, char) (&front, &rear, value);
				
	temp = front;
	if (temp) {
		while (temp != NULL ) {
			printf("%c ",temp->data);
			temp = temp->pNext;
		}
	}
	else {
		printf("Empty!");
	}
	printf("\n\n");
}

void shortQueue() {
	short value;
	struct TEMPLATE(node, short) *front = NULL, *rear = NULL, *temp;

	printf("Please enter the value(short)\n");
	scanf(" %hd", &value);
	TEMPLATE(enqueue, short) (&front, &rear, value);
				
	temp = front;
	if (temp) {
		while (temp != NULL ) {
			printf("%hd ",temp->data);
			temp = temp->pNext;
		}
	}
	else {
		printf("Empty!");
	}
	printf("\n\n");
}

void intQueue() {
	int value;
	struct TEMPLATE(node, int) *front = NULL, *rear = NULL, *temp;
    
	printf("Please enter the value(int)\n");
	scanf(" %d", &value);
	TEMPLATE(enqueue, int) (&front, &rear, value);
				
	temp = front;
	if (temp) {
		while (temp != NULL ) {
			printf("%d ",temp->data);
			temp = temp->pNext;
		}
	}
	else {
		printf("Empty!");
	}
	printf("\n\n");
}

void longQueue() {
	long value;
	struct TEMPLATE(node, long) *front = NULL, *rear = NULL, *temp;

	printf("Please enter the value(long)\n");
	scanf(" %ld", &value);
	TEMPLATE(enqueue, long) (&front, &rear, value);
				
	temp = front;
	if (temp) {
		while (temp != NULL ) {
			printf("%ld ",temp->data);
			temp = temp->pNext;
		}
	}
	else {
		printf("Empty!");
	}
	printf("\n\n");
}

void floatQueue() {
	float value;
	struct TEMPLATE(node, float) *front = NULL, *rear = NULL, *temp;

	printf("Please enter the value(float)\n");
	scanf(" %f", &value);
	TEMPLATE(enqueue, float) (&front, &rear, value);
				
	temp = front;
	if (temp) {
		while (temp != NULL ) {
			printf("%f ",temp->data);
			temp = temp->pNext;
		}
	}
	else {
		printf("Empty!");
	}
	printf("\n\n");
}

void doubleQueue() {
	double value;
	struct TEMPLATE(node, double) *front = NULL, *rear = NULL, *temp;
    
	printf("Please enter the value(double)\n");
	scanf(" %lf", &value);
	TEMPLATE(enqueue, double) (&front, &rear, value);
				
	temp = front;
	if (temp) {
		while (temp != NULL ) {
			printf("%lf ",temp->data);
			temp = temp->pNext;
		}
	}
	else {
		printf("Empty!");
	}
	printf("\n\n");
}

void charPtrQueue() {
	char* value;
	struct TEMPLATE(nodeP, char) *front = NULL, *rear = NULL, *temp;

	printf("Please enter the value(char*)\n");
	value=(char*)malloc(sizeof(char));
	scanf(" %c", value);
	TEMPLATE(enqueueP, char) (&front, &rear, value);
				
	temp = front;
	if (temp) {
		while (temp != NULL ) {
			printf("%c ",*(temp->data));
			temp = temp->pNext;
		}
	}
	else {
		printf("Empty!");
	}
	printf("\n\n");
}

void shortPtrQueue() {
	short* value;
	struct TEMPLATE(nodeP, short) *front = NULL, *rear = NULL, *temp;

	printf("Please enter the value(short*)\n");
	value=(short*)malloc(sizeof(short));
	scanf(" %hd", value);
	TEMPLATE(enqueueP, short) (&front, &rear, value);
				
	temp = front;
	if (temp) {
		while (temp != NULL ) {
			printf("%hd ",*(temp->data));
			temp = temp->pNext;
		}
	}
	else {
		printf("Empty!");
	}
	printf("\n\n");
}

void intPtrQueue() {
	int* value;
	struct TEMPLATE(nodeP, int) *front = NULL, *rear = NULL, *temp;

	printf("Please enter the value(int*)\n");
	value=(int*)malloc(sizeof(int));
	scanf(" %d", value);
	TEMPLATE(enqueueP, int) (&front, &rear, value);
			
	temp = front;
	if (temp) {
		while (temp != NULL ) {
			printf("%d ",*(temp->data));
			temp = temp->pNext;
		}
	}
	else {
		printf("Empty!");
	}
	printf("\n\n");
}

void longPtrQueue() {
	long* value;
	struct TEMPLATE(nodeP, long) *front = NULL, *rear = NULL, *temp;

	printf("Please enter the value(long*)\n");
	value=(long*)malloc(sizeof(long));
	scanf(" %ld", value);
	TEMPLATE(enqueueP, long) (&front, &rear, value);
				
	temp = front;
	if (temp) {
		while (temp != NULL ) {
			printf("%ld ",*(temp->data));
			temp = temp->pNext;
		}
	}
	else {
		printf("Empty!");
	}
	printf("\n\n");
}

void floatPtrQueue() {
	float* value;
	struct TEMPLATE(nodeP, float) *front = NULL, *rear = NULL, *temp;

	printf("Please enter the value(float*)\n");
	value=(float*)malloc(sizeof(float));
	scanf(" %f", value);
	TEMPLATE(enqueueP, float) (&front, &rear, value);
				
	temp = front;
	if (temp) {
		while (temp != NULL ) {
			printf("%f ",*(temp->data));
			temp = temp->pNext;
		}
	}
	else {
		printf("Empty!");
	}
	printf("\n\n");
}

void doublePtrQueue() {
	double* value;
	struct TEMPLATE(nodeP, double) *front = NULL, *rear = NULL, *temp;
    
	printf("Please enter the value(double*)\n");
	value=(double*)malloc(sizeof(double));
	scanf(" %lf", value);
	TEMPLATE(enqueueP, double) (&front, &rear, value);
				
	temp = front;
	if (temp) {
		while (temp != NULL ) {
			printf("%lf ",*(temp->data));
			temp = temp->pNext;
		}
	}
	else {
		printf("Empty!");
	}
	printf("\n\n");
}
