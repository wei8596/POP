/*
char queue functions
*/
#include "queue_char.h"

//  Enqueue
void enqueue(Node** front, Node** rear, char data) {
	Node* temp = (Node*)mymalloc(sizeof(Node));

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
void dequeue(Node** front, Node** rear) {
	Node* temp = *front;
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
