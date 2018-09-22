/*
short linked list header file
*/
#ifndef LIST_SHORT_H
#define LIST_SHORT_H
#include "mm.h"

//  Node definition
typedef struct node {
    short data;
    struct node* pPrevious;
    struct node* pNext;
}Node;

//  Add a new node forward
extern void addNodeForward(Node**, short);

//  Add a new node in the reverse direction
extern void addNodeReverse(Node**, short);

//  Display nodes in forward direction
extern void displayNodeForward(Node*);

//  Display nodes in reverse direction
extern void displayNodeReverse(Node*);


//  Delete nodes in the DoubleLinkedList
extern void deleteNode(Node**, short);

//  Reverse nodes
extern void reverseNodes(Node**);

#endif
