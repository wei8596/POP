/*
pointer stack functions
*/
#include "list_ptr.c"

//  Push an element onto the stack
void TEMPLATE(pushP, T) (struct TEMPLATE(nodeP, T) **top,T *data) {
    struct TEMPLATE(nodeP, T) *newNode = (struct TEMPLATE(nodeP, T)*)mymalloc(sizeof(struct TEMPLATE(nodeP, T)));

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
void TEMPLATE(popP, T) (struct TEMPLATE(nodeP, T) **top) {
    if(*top == NULL) {
        printf("The stack is empty!\n");
        return;
    }

	struct TEMPLATE(nodeP, T) *tmpNode = *top;
	if((*top)->pNext == NULL) {
		*top = NULL;
	}
	else {
		*top = (*top)->pNext;
		(*top)->pPrevious = NULL;
	}
    myfree(tmpNode);
}
