/*
pointer linked list functions
*/
#ifdef T
#include "mm.h"

//  Node definition
struct TEMPLATE(nodeP, T) {
    T *data;
    struct TEMPLATE(nodeP, T) *pPrevious;
    struct TEMPLATE(nodeP, T) *pNext;
};

//  Add a node forward
void TEMPLATE(addNodeForwardP, T) (struct TEMPLATE(nodeP, T) **pHead, T *data) {
    struct TEMPLATE(nodeP, T) *pNode = (struct TEMPLATE(nodeP, T)*)mymalloc(sizeof(struct TEMPLATE(nodeP, T)));

    if (pNode) {
        struct TEMPLATE(nodeP, T) *pCurrent = *pHead;
        if (*pHead == NULL) {
            pNode->data = data;
            pNode->pPrevious = NULL;
            pNode->pNext = NULL;
            *pHead = pNode;
        }
        else {
            while (pCurrent->pNext != NULL) {
                pCurrent = pCurrent->pNext;
            }
            pCurrent->pNext = pNode;
            pNode->data = data;
            pNode->pPrevious = pCurrent;
            pNode->pNext = NULL;
        }
    }
    else {
        printf("AddNodeForward Error!\n");
    }
}

//  Add nodes in reverse direction
void TEMPLATE(addNodeReverseP, T) (struct TEMPLATE(nodeP, T) **pHead, T *data) {
    struct TEMPLATE(nodeP, T) *pNode = (struct TEMPLATE(nodeP, T)*)mymalloc(sizeof(struct TEMPLATE(nodeP, T)));

    if (pNode) {
        struct TEMPLATE(nodeP, T) *pCurrent =  *pHead;
        if (*pHead == NULL) {
            pNode->data = data;
            pNode->pPrevious = NULL;
            pNode->pNext = NULL;
            *pHead = pNode;
        }
        else {
            while (pCurrent->pPrevious != NULL ) {
                pCurrent = pCurrent->pPrevious;
            }
            pNode->data = data;
            pNode->pPrevious = NULL;
            pNode->pNext = pCurrent;
            pCurrent->pPrevious = pNode;
            *pHead = pNode;
        }
    }
    else {
        printf("AddNodeReverse Error!\n");
    }
}

//  Delete nodes
void TEMPLATE(deleteNodeP, T) (struct TEMPLATE(nodeP, T) **pHead, T *Searchdata) {
    int Nodefound = 0;
    struct TEMPLATE(nodeP, T) *pCurrent =  *pHead;
    if (pCurrent != NULL) {
        struct TEMPLATE(nodeP, T) *pNextNode =  pCurrent->pNext;
        struct TEMPLATE(nodeP, T) *pTemp = NULL;
        if (pNextNode != NULL) {
            while ((pNextNode != NULL) && (Nodefound == 0)) {
                //  if search entry is at the beginning
                if ((*pHead)->data == Searchdata) {
                    pCurrent = (*pHead)->pNext;
                    *pHead = pCurrent;
                    (*pHead)->pPrevious = NULL;
                    Nodefound = 1;
                }
                //  if the search entry is somewhere in the Node or at the end
                else if (pNextNode->data == Searchdata) {
                    Nodefound = 1;
                    pTemp = pNextNode->pNext;
                    pCurrent->pNext = pTemp;

                    /*  if the node to be deleted is not NULL,
                    then point pNextnode->pNext to the previous node
                    which is pCurrent */
                    if(pTemp) {
                        pTemp->pPrevious = pCurrent;
                    }
                    myfree(pNextNode);
                }
                pNextNode = pNextNode->pNext;
                pCurrent = pCurrent->pNext;
            }
        }
        else if (pCurrent->data == Searchdata) {
            /*  add code to delete nodes allocated with other functions if
            the search entry is found.
            */
            Nodefound = 1;
            myfree(pCurrent);
            pCurrent = NULL;
            *pHead = pCurrent;
        }
    }
    else if (pCurrent == NULL) {
        printf("Nothing can be deleted!\n");
    }
    if (Nodefound == 0 && pCurrent!= NULL) {
        printf("The data you enter is not found\n");
    }
}

//  Reverse nodes
void TEMPLATE(reverseNodesP, T) (struct TEMPLATE(nodeP, T) **pHead) {
    struct TEMPLATE(nodeP, T) *pCurrent = *pHead, *pNextNode = NULL;

    if (pCurrent) {
        *pHead = NULL;
        while (pCurrent != NULL) {
            pNextNode = pCurrent->pNext;
            pCurrent->pNext = *pHead;
            pCurrent->pPrevious = pNextNode;
            *pHead = pCurrent;
            pCurrent = pNextNode;
        }
    }
    else {
        printf("Empty!\n");
    }
}

#endif
