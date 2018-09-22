/*
pointer to long linked list header file
*/
#ifndef LIST_PTR_TO_LONG_H
#define LIST_PTR_TO_LONG_H
#include "mm.h"

//  Node definition
typedef struct node {
    long* data;
    struct node* pPrevious;
    struct node* pNext;
}Node;

//  Add a new node forward
extern void addNodeForward(Node**, long*);

//  Add a new node in the reverse direction
extern void addNodeReverse(Node**, long*);

//  Display nodes in forward direction
extern void displayNodeForward(Node*);

//  Display nodes in reverse direction
extern void displayNodeReverse(Node*);


//  Delete nodes in the DoubleLinkedList
extern void deleteNode(Node**, long*);

//  Reverse nodes
extern void reverseNodes(Node**);

#endif
