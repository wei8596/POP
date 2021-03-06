/*
test the double queue module
*/
#include "queue_double.h"

int main(void) {
    double value;
	int choice;
    Node* front = NULL;
    Node* rear = NULL;

    printf("Please choose a option. (Enter -1 to stop.)\n");
	
    while (choice != -1) {
		printf("(1) enqueue\n");
		printf("(2) dequeue\n");
		scanf(" %d", &choice);
        if (choice == -1)
            break;
		switch(choice) {
			case 1:
				printf("Please enter the value(double)");
				scanf(" %lf", &value);
				enqueue(&front, &rear, value);
				break;
			case 2:
				dequeue(&front, &rear);
				break;
		}
		displayNodeForward(front);
    }
    //printf("\n-----Reverse the queue-----\n\n");
    //reverseNodes(&front);
    //printf("The queue contains:\n");
    //displayNodeForward(front);
	
    return 0;
}
