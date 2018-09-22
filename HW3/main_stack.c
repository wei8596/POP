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
		   
    scanf(" %d", &select);
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

    return 0;
}

void charStack() {
	char value;
	int choice;
    struct TEMPLATE(node, char) *top = NULL, *temp;
	
	while (choice != -1) {
		printf("Please choose an option. (Enter -1 to stop.)\n");
		printf("(1) push\n");
		printf("(2) pop\n");
		printf("(3) reverse\n");
		scanf(" %d", &choice);
        if (choice == -1)
            break;
		switch(choice) {
			case 1:
				printf("Please enter the value(char)");
				scanf(" %c", &value);
				TEMPLATE(push, char) (&top, value);
				break;
			case 2:
				TEMPLATE(pop, char) (&top);
				break;
			case 3:
				TEMPLATE(reverseNodes, char) (&top);
				break;
		}
		
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
}

void shortStack() {
	short value;
	int choice;
    struct TEMPLATE(node, short) *top = NULL, *temp;

	while (choice != -1) {
		printf("Please choose an option. (Enter -1 to stop.)\n");
		printf("(1) push\n");
		printf("(2) pop\n");
		printf("(3) reverse\n");
		scanf(" %d", &choice);
        if (choice == -1)
            break;
		switch(choice) {
			case 1:
				printf("Please enter the value(short)");
				scanf(" %hd", &value);
				TEMPLATE(push, short) (&top, value);
				break;
			case 2:
				TEMPLATE(pop, short) (&top);
				break;
			case 3:
				TEMPLATE(reverseNodes, short) (&top);
				break;
		}
		
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
}

void intStack() {
	int value;
	int choice;
    struct TEMPLATE(node, int) *top = NULL, *temp;

	while (choice != -1) {
		printf("Please choose an option. (Enter -1 to stop.)\n");
		printf("(1) push\n");
		printf("(2) pop\n");
		printf("(3) reverse\n");
		scanf(" %d", &choice);
        if (choice == -1)
            break;
		switch(choice) {
			case 1:
				printf("Please enter the value(int)");
				scanf(" %d", &value);
				TEMPLATE(push, int) (&top, value);
				break;
			case 2:
				TEMPLATE(pop, int) (&top);
				break;
			case 3:
				TEMPLATE(reverseNodes, int) (&top);
				break;
		}
		
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
}

void longStack() {
	long value;
	int choice;
    struct TEMPLATE(node, long) *top = NULL, *temp;

	while (choice != -1) {
		printf("Please choose an option. (Enter -1 to stop.)\n");
		printf("(1) push\n");
		printf("(2) pop\n");
		printf("(3) reverse\n");
		scanf(" %d", &choice);
        if (choice == -1)
            break;
		switch(choice) {
			case 1:
				printf("Please enter the value(long)");
				scanf(" %ld", &value);
				TEMPLATE(push, long) (&top, value);
				break;
			case 2:
				TEMPLATE(pop, long) (&top);
				break;
			case 3:
				TEMPLATE(reverseNodes, long) (&top);
				break;
		}
		
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
}

void floatStack() {
	float value;
	int choice;
    struct TEMPLATE(node, float) *top = NULL, *temp;

	while (choice != -1) {
		printf("Please choose an option. (Enter -1 to stop.)\n");
		printf("(1) push\n");
		printf("(2) pop\n");
		printf("(3) reverse\n");
		scanf(" %d", &choice);
        if (choice == -1)
            break;
		switch(choice) {
			case 1:
				printf("Please enter the value(float)");
				scanf(" %f", &value);
				TEMPLATE(push, float) (&top, value);
				break;
			case 2:
				TEMPLATE(pop, float) (&top);
				break;
			case 3:
				TEMPLATE(reverseNodes, float) (&top);
				break;
		}
		
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
}

void doubleStack() {
	double value;
	int choice;
    struct TEMPLATE(node, double) *top = NULL, *temp;

	while (choice != -1) {
		printf("Please choose an option. (Enter -1 to stop.)\n");
		printf("(1) push\n");
		printf("(2) pop\n");
		printf("(3) reverse\n");
		scanf(" %d", &choice);
        if (choice == -1)
            break;
		switch(choice) {
			case 1:
				printf("Please enter the value(double)");
				scanf(" %lf", &value);
				TEMPLATE(push, double) (&top, value);
				break;
			case 2:
				TEMPLATE(pop, double) (&top);
				break;
			case 3:
				TEMPLATE(reverseNodes, double) (&top);
				break;
		}
		
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
}

void charPtrStack() {
	char* value;
	int choice;
    struct TEMPLATE(nodeP, char) *top = NULL, *temp;

	while (choice != -1) {
		printf("Please choose an option. (Enter -1 to stop.)\n");
		printf("(1) push\n");
		printf("(2) pop\n");
		printf("(3) reverse\n");
		scanf(" %d", &choice);
        if (choice == -1)
            break;
		switch(choice) {
			case 1:
				printf("Please enter the value(char*)");
				value=(char*)malloc(sizeof(char));
				scanf(" %c", value);
				TEMPLATE(pushP, char) (&top, value);
				break;
			case 2:
				TEMPLATE(popP, char) (&top);
				break;
			case 3:
				TEMPLATE(reverseNodesP, char) (&top);
				break;
		}
		
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
}

void shortPtrStack() {
	short* value;
	int choice;
    struct TEMPLATE(nodeP, short) *top = NULL, *temp;

	while (choice != -1) {
		printf("Please choose an option. (Enter -1 to stop.)\n");
		printf("(1) push\n");
		printf("(2) pop\n");
		printf("(3) reverse\n");
		scanf(" %d", &choice);
        if (choice == -1)
            break;
		switch(choice) {
			case 1:
				printf("Please enter the value(short*)");
				value=(short*)malloc(sizeof(short));
				scanf(" %hd", value);
				TEMPLATE(pushP, short) (&top, value);
				break;
			case 2:
				TEMPLATE(popP, short) (&top);
				break;
			case 3:
				TEMPLATE(reverseNodesP, short) (&top);
				break;
		}
		
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
}

void intPtrStack() {
	int* value;
	int choice;
    struct TEMPLATE(nodeP, int) *top = NULL, *temp;

	while (choice != -1) {
		printf("Please choose an option. (Enter -1 to stop.)\n");
		printf("(1) push\n");
		printf("(2) pop\n");
		printf("(3) reverse\n");
		scanf(" %d", &choice);
        if (choice == -1)
            break;
		switch(choice) {
			case 1:
				printf("Please enter the value(int*)");
				value=(int*)malloc(sizeof(int));
				scanf(" %d", value);
				TEMPLATE(pushP, int) (&top, value);
				break;
			case 2:
				TEMPLATE(popP, int) (&top);
				break;
			case 3:
				TEMPLATE(reverseNodesP, int) (&top);
				break;
		}
		
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
}

void longPtrStack() {
	long* value;
	int choice;
    struct TEMPLATE(nodeP, long) *top = NULL, *temp;

	while (choice != -1) {
		printf("Please choose an option. (Enter -1 to stop.)\n");
		printf("(1) push\n");
		printf("(2) pop\n");
		printf("(3) reverse\n");
		scanf(" %d", &choice);
        if (choice == -1)
            break;
		switch(choice) {
			case 1:
				printf("Please enter the value(long*)");
				value=(long*)malloc(sizeof(long));
				scanf(" %ld", value);
				TEMPLATE(pushP, long) (&top, value);
				break;
			case 2:
				TEMPLATE(popP, long) (&top);
				break;
			case 3:
				TEMPLATE(reverseNodesP, long) (&top);
				break;
		}
		
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
}

void floatPtrStack() {
	float* value;
	int choice;
    struct TEMPLATE(nodeP, float) *top = NULL, *temp;

	while (choice != -1) {
		printf("Please choose an option. (Enter -1 to stop.)\n");
		printf("(1) push\n");
		printf("(2) pop\n");
		printf("(3) reverse\n");
		scanf(" %d", &choice);
        if (choice == -1)
            break;
		switch(choice) {
			case 1:
				printf("Please enter the value(float*)");
				value=(float*)malloc(sizeof(float));
				scanf(" %f", value);
				TEMPLATE(pushP, float) (&top, value);
				break;
			case 2:
				TEMPLATE(popP, float) (&top);
				break;
			case 3:
				TEMPLATE(reverseNodesP, float) (&top);
				break;
		}
		
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
}

void doublePtrStack() {
	double* value;
	int choice;
    struct TEMPLATE(nodeP, double) *top = NULL, *temp;

	while (choice != -1) {
		printf("Please choose an option. (Enter -1 to stop.)\n");
		printf("(1) push\n");
		printf("(2) pop\n");
		printf("(3) reverse\n");
		scanf(" %d", &choice);
        if (choice == -1)
            break;
		switch(choice) {
			case 1:
				printf("Please enter the value(double*)");
				value=(double*)malloc(sizeof(double));
				scanf(" %lf", value);
				TEMPLATE(pushP, double) (&top, value);
				break;
			case 2:
				TEMPLATE(popP, double) (&top);
				break;
			case 3:
				TEMPLATE(reverseNodesP, double) (&top);
				break;
		}
		
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
}
