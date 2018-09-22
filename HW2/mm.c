/*
memory management functions
*/
#include "mm.h"

//  wrap up the function malloc
void* mymalloc(size_t size) {
    return malloc(size);
}

//  wrap up the function calloc
void* mycalloc(size_t num, size_t size) {
    return calloc(num, size);
}

//  wrap up the function realloc
void* myrealloc(void* ptr, size_t new_size) {
    return realloc(ptr, new_size);
}

//  wrap up the function free
void myfree(void* ptr) {
    free(ptr);
}
