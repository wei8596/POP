/*
test the stack module
*/
#include "stack.h"

int main(void) {
    int num;
    Node* top = NULL;

    printf("Please enter a list of integers each of which is on a line by itself. (Enter -1 to stop.)\n");
    while (scanf(" %d", &num) == 1) {
        if (num == -1)
            break;
        else {
            push(&top, num);
        }
    }
    printf("\nThe stack contains:\n");
    displayNodeForward(top);
    printf("\n-----Reverse the stack-----\n\n");
    reverseNodes(&top);
    printf("The stack contains:\n");
    displayNodeForward(top);
    printf("\n-----Removes the element on top of the stack-----\n\n");
    pop(&top);
    printf("The stack contains:\n");
    displayNodeForward(top);

    return 0;
}
