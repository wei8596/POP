/*
linked list header file
*/
#ifndef LIST_H
#define LIST_H
#include "mm.h"

//  Node definition
typedef struct node {
    int data;
    struct node* pPrevious;
    struct node* pNext;
}Node;

//  Add a new node forward
extern void addNodeForward(Node**, int);

//  Add a new node in the reverse direction
extern void addNodeReverse(Node**, int);

//  Display nodes in forward direction
extern void displayNodeForward(Node*);

//  Display nodes in reverse direction
extern void displayNodeReverse(Node*);


//  Delete nodes in the DoubleLinkedList
extern void deleteNode(Node**, int);

//  Reverse nodes
extern void reverseNodes(Node**);

#endif
