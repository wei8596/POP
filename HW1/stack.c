/*
stack functions
*/
#include "stack.h"

//  Push an element onto the stack
void push(Node** top, int data) {
    Node* newNode = (Node*)mymalloc(sizeof(Node));

    if(newNode) {
        newNode->pPrevious = NULL;
        newNode->data = data;
        newNode->pNext = *top;
        *top = newNode;
    }
    else {
        printf("Push Error!\n");
    }
}
//  Pop off the top element of the stack
void pop(Node** top) {
    Node* tmpNode;

    if(*top == NULL) {
        printf("The stack is empty!\n");
        return;
    }

    tmpNode = *top;
    *top = (*top)->pNext;
    (*top)->pPrevious = NULL;
    myfree(tmpNode);
}
