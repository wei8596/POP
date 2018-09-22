/*
test the float stack module
*/
#include "stack_float.h"

int main(void) {
    float value;
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
				printf("Please enter the value(float)");
				scanf(" %f", &value);
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
