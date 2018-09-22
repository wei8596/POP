/*
char linked list header file
*/
#ifndef LIST_CHAR_H
#define LIST_CHAR_H
#include "mm.h"

//  Node definition
typedef struct node {
    char data;
    struct node* pPrevious;
    struct node* pNext;
}Node;

//  Add a new node forward
extern void addNodeForward(Node**, char);

//  Add a new node in the reverse direction
extern void addNodeReverse(Node**, char);

//  Display nodes in forward direction
extern void displayNodeForward(Node*);

//  Display nodes in reverse direction
extern void displayNodeReverse(Node*);


//  Delete nodes in the DoubleLinkedList
extern void deleteNode(Node**, char);

//  Reverse nodes
extern void reverseNodes(Node**);

#endif
