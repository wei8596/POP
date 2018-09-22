/*
test doubly linked list
*/
#include "list.h"

int main(void) {
    int num;
    Node* pHead = NULL;

    printf("-----addNodeForward----- (Enter -1 to stop.)\n");
    while (scanf(" %d", &num) == 1) {
        if (num == -1)
            break;
        else {
            addNodeForward(&pHead, num);
        }
    }

    printf("\nDisplaying node data in forward direction\n");
    displayNodeForward(pHead);

    printf("\n-----addNodeReverse----- (Enter -1 to stop.)\n");
    while (scanf(" %d", &num) == 1) {
        if (num == -1)
            break;
        else {
            addNodeReverse(&pHead, num);
        }
    }

    printf("\nDisplaying node data in forward direction\n");
    displayNodeForward(pHead);

    printf("\nDisplaying node data in reverse direction\n");
    displayNodeReverse(pHead);

    printf("\n-----ReverseNodes-----\n");
    reverseNodes(&pHead);

    printf("\nDisplaying node data in forward direction\n");
    displayNodeForward(pHead);

    printf("\n-----Enter the node you want to delete:");
    scanf("%d",&num);
    deleteNode(&pHead, num);

    printf("\nDisplaying node data in forward direction\n");
    displayNodeForward(pHead);

    return 0;
}
