/*
pointer to char stack header file
*/
#ifndef STACK_PTR_TO_CHAR_H
#define STACK_PTR_TO_CHAR_H
#include "list_ptr_to_char.h"

extern void push(Node**, char*);  //  Push an element onto the stack
extern void pop(Node**);  //  Pop off the top element of the stack

#endif
