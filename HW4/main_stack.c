/*
test the stack module
*/
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "stack_ptr.h"

void charStack();
void shortStack();
void intStack();
void longStack();
void floatStack();
void doubleStack();
void charPtrStack();
void shortPtrStack();
void intPtrStack();
void longPtrStack();
void floatPtrStack();
void doublePtrStack();

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
				charStack();
				break;
			case 1:
				shortStack();
				break;
			case 2:
				intStack();
				break;
			case 3:
				longStack();
				break;
			case 4:
				floatStack();
				break;
			case 5:
				doubleStack();
				break;
			case 6:
				charPtrStack();
				break;
			case 7:
				shortPtrStack();
				break;
			case 8:
				intPtrStack();
				break;
			case 9:
				longPtrStack();
				break;
			case 10:
				floatPtrStack();
				break;
			case 11:
				doublePtrStack();
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

void charStack() {
	char value;
    struct TEMPLATE(node, char) *top = NULL, *temp;
	
	printf("Please enter the value(char)\n");
	scanf(" %c", &value);
	TEMPLATE(push, char) (&top, value);

	temp = top;
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

void shortStack() {
	short value;
    struct TEMPLATE(node, short) *top = NULL, *temp;

	printf("Please enter the value(short)\n");
	scanf(" %hd", &value);
	TEMPLATE(push, short) (&top, value);

	temp = top;
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

void intStack() {
	int value;
    struct TEMPLATE(node, int) *top = NULL, *temp;

	printf("Please enter the value(int)\n");
	scanf(" %d", &value);
	TEMPLATE(push, int) (&top, value);	
		
	temp = top;
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

void longStack() {
	long value;
    struct TEMPLATE(node, long) *top = NULL, *temp;
	
	printf("Please enter the value(long)\n");
	scanf(" %ld", &value);
	TEMPLATE(push, long) (&top, value);
	
	temp = top;
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

void floatStack() {
	float value;
    struct TEMPLATE(node, float) *top = NULL, *temp;
	
	printf("Please enter the value(float)\n");
	scanf(" %f", &value);
	TEMPLATE(push, float) (&top, value);
	
	temp = top;
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

void doubleStack() {
	double value;
    struct TEMPLATE(node, double) *top = NULL, *temp;
	
	printf("Please enter the value(double)\n");
	scanf(" %lf", &value);
	TEMPLATE(push, double) (&top, value);		
		
	temp = top;
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

void charPtrStack() {
	char* value;
    struct TEMPLATE(nodeP, char) *top = NULL, *temp;

	printf("Please enter the value(char*)\n");
	value=(char*)malloc(sizeof(char));
	scanf(" %c", value);
	TEMPLATE(pushP, char) (&top, value);
		
	temp = top;
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

void shortPtrStack() {
	short* value;
    struct TEMPLATE(nodeP, short) *top = NULL, *temp;

	printf("Please enter the value(short*)\n");
	value=(short*)malloc(sizeof(short));
	scanf(" %hd", value);
	TEMPLATE(pushP, short) (&top, value);			
		
	temp = top;
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

void intPtrStack() {
	int* value;
    struct TEMPLATE(nodeP, int) *top = NULL, *temp;
	
	printf("Please enter the value(int*)\n");
	value=(int*)malloc(sizeof(int));
	scanf(" %d", value);
	TEMPLATE(pushP, int) (&top, value);
				
	temp = top;
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

void longPtrStack() {
	long* value;
    struct TEMPLATE(nodeP, long) *top = NULL, *temp;
	
	printf("Please enter the value(long*)\n");
	value=(long*)malloc(sizeof(long));
	scanf(" %ld", value);
	TEMPLATE(pushP, long) (&top, value);			
		
	temp = top;
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

void floatPtrStack() {
	float* value;
    struct TEMPLATE(nodeP, float) *top = NULL, *temp;

	printf("Please enter the value(float*)\n");
	value=(float*)malloc(sizeof(float));
	scanf(" %f", value);
	TEMPLATE(pushP, float) (&top, value);		
		
	temp = top;
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

void doublePtrStack() {
	double* value;
    struct TEMPLATE(nodeP, double) *top = NULL, *temp;

	printf("Please enter the value(double*)\n");
	value=(double*)malloc(sizeof(double));
	scanf(" %lf", value);
	TEMPLATE(pushP, double) (&top, value);		
		
	temp = top;
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
