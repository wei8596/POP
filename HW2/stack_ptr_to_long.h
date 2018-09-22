/*
pointer to long stack header file
*/
#ifndef STACK_PTR_TO_LONG_H
#define STACK_PTR_TO_LONG_H
#include "list_ptr_to_long.h"

extern void push(Node**, long*);  //  Push an element onto the stack
extern void pop(Node**);  //  Pop off the top element of the stack

#endif
