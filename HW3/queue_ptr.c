/*
pointer queue functions
*/
#include "list_ptr.c"

//  Enqueue
void TEMPLATE(enqueueP, T) (struct TEMPLATE(nodeP, T) **front, struct TEMPLATE(nodeP, T) **rear, T *data) {
	struct TEMPLATE(nodeP, T) *temp = (struct TEMPLATE(nodeP, T)*)mymalloc(sizeof(struct TEMPLATE(nodeP, T)));

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
void TEMPLATE(dequeueP, T) (struct TEMPLATE(nodeP, T) **front, struct TEMPLATE(nodeP, T) **rear) {
	struct TEMPLATE(nodeP, T) *temp = *front;
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
