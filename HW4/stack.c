/*
stack functions
*/
#include "list.c"

//  Push an element onto the stack
void TEMPLATE(push, T) (struct TEMPLATE(node, T) **top, T data) {
    struct TEMPLATE(node, T) *newNode = (struct TEMPLATE(node, T)*)mymalloc(sizeof(struct TEMPLATE(node, T)));

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
void TEMPLATE(pop, T) (struct TEMPLATE(node, T) **top) {
    if(*top == NULL) {
        printf("The stack is empty!\n");
        return;
    }

	struct TEMPLATE(node, T) *tmpNode = *top;
	if((*top)->pNext == NULL) {
		*top = NULL;
	}
	else {
		*top = (*top)->pNext;
		(*top)->pPrevious = NULL;
	}
    myfree(tmpNode);
}
