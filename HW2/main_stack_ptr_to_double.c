/*
test the double* stack module
*/
#include "stack_ptr_to_double.h"

int main(void) {
    double* value;
	int choice;
    Node* top = NULL;

    printf("Please choose a option. (Enter -1 to stop.)\n");
	
	while (choice != -1) {
		printf("(1) push\n");
		printf("(2) pop\n");
		printf("(3) reverse\n");
		scanf(" %d", &choice);
        if (choice == -1)
            break;
		switch(choice) {
			case 1:
				printf("Please enter the value(double*)");
				value=(double*)mymalloc(sizeof(double));
				scanf(" %lf", value);
				push(&top, value);
				break;
			case 2:
				pop(&top);
				break;
			case 3:
				reverseNodes(&top);
				break;
		}
		displayNodeForward(top);
    }

    return 0;
}
