/*
test the char* stack module
*/
#include "stack_ptr_to_char.h"

int main(void) {
    char* value;
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
				printf("Please enter the value(char*)");
				value=(char*)mymalloc(sizeof(char));
				scanf(" %c", value);
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
