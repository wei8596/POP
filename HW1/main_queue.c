/*
test the queue module
*/
#include "queue.h"

int main(void) {
    int num;
    Node* front = NULL;
    Node* rear = NULL;

    printf("Please enter a list of integers each of which is on a line by itself. (Enter -1 to stop.)\n");
    while (scanf(" %d", &num) == 1) {
        if (num == -1)
            break;
        else {
            enqueue(&front, &rear, num);
        }
    }
    printf("\nThe queue contains:\n");
    displayNodeForward(front);
    //printf("\n-----Reverse the queue-----\n\n");
    //reverseNodes(&front);
    //printf("The queue contains:\n");
    //displayNodeForward(front);
    printf("\n-----Removes the element from the front of the queue-----\n\n");
    dequeue(&front, &rear);
    printf("The queue contains:\n");
    displayNodeForward(front);

    return 0;
}
