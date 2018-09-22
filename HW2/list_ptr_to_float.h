/*
pointer to float linked list header file
*/
#ifndef LIST_PTR_TO_FLOAT_H
#define LIST_PTR_TO_FLOAT_H
#include "mm.h"

//  Node definition
typedef struct node {
    float* data;
    struct node* pPrevious;
    struct node* pNext;
}Node;

//  Add a new node forward
extern void addNodeForward(Node**, float*);

//  Add a new node in the reverse direction
extern void addNodeReverse(Node**, float*);

//  Display nodes in forward direction
extern void displayNodeForward(Node*);

//  Display nodes in reverse direction
extern void displayNodeReverse(Node*);


//  Delete nodes in the DoubleLinkedList
extern void deleteNode(Node**, float*);

//  Reverse nodes
extern void reverseNodes(Node**);

#endif
