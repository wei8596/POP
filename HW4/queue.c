/*
queue functions
*/
#include "list.c"

//  Enqueue
void TEMPLATE(enqueue, T) (struct TEMPLATE(node, T) **front, struct TEMPLATE(node, T) **rear, T data) {
	struct TEMPLATE(node, T) *temp = (struct TEMPLATE(node, T)*)mymalloc(sizeof(struct TEMPLATE(node, T)));

	if (temp) {
        temp->data = data;
        temp->pPrevious = NULL;
        temp->pNext = NULL;
        if (*front == NULL && *rear == NULL){
            *front = *rear = temp;
            return;
        }
        else {
            (*rear)->pNext = temp;
            temp->pPrevious = *rear;
            *rear = temp;
        }
    }
    else {
        printf("Enqueue Error!\n");
    }
}

//  Dequeue
void TEMPLATE(dequeue, T) (struct TEMPLATE(node, T) **front, struct TEMPLATE(node, T) **rear) {
	struct TEMPLATE(node, T) *temp = *front;
	if (*front == NULL && *rear == NULL) {
		printf("The queue is Empty!\n");
		return;
	}
	else if (*front == *rear) {
		*front = *rear = NULL;
	}
	else {
		*front = (*front)->pNext;
		(*front)->pPrevious = NULL;
	}
	myfree(temp);
}
