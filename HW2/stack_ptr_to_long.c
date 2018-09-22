/*
pointer to long stack functions
*/
#include "stack_ptr_to_long.h"

//  Push an element onto the stack
void push(Node** top, long* data) {
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
	
    if(*top == NULL) {
        printf("The stack is empty!\n");
        return;
    }
	
	Node* tmpNode = *top;
	
	if((*top)->pNext == NULL) {
		*top = NULL;
	}
	else {
		*top = (*top)->pNext;
		(*top)->pPrevious = NULL;
	}
    myfree(tmpNode);
}
