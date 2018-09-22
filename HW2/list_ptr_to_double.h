/*
pointer to double linked list header file
*/
#ifndef LIST_PTR_to_DOUBLE_H
#define LIST_PTR_to_DOUBLE_H
#include "mm.h"

//  Node definition
typedef struct node {
    double* data;
    struct node* pPrevious;
    struct node* pNext;
}Node;

//  Add a new node forward
extern void addNodeForward(Node**, double*);

//  Add a new node in the reverse direction
extern void addNodeReverse(Node**, double*);

//  Display nodes in forward direction
extern void displayNodeForward(Node*);

//  Display nodes in reverse direction
extern void displayNodeReverse(Node*);


//  Delete nodes in the DoubleLinkedList
extern void deleteNode(Node**, double*);

//  Reverse nodes
extern void reverseNodes(Node**);

#endif
