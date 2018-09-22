/*
memory management header file
*/
#ifndef MM_H
#define MM_H
#include <stdio.h>
#include <stdlib.h>

extern void* mymalloc(size_t);  //  wrap up the function malloc
extern void* mycalloc(size_t, size_t);  //  wrap up the function calloc
extern void* myrealloc(void*, size_t);  //  wrap up the function realloc
extern void myfree(void*);  //  wrap up the function free

#endif
