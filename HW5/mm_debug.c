#include <stdio.h>
#include "mm_debug.h"

void* dbg_mymalloc(char *file, unsigned line, char *func, unsigned nbytes) {
    void *newptr= (void*)mymalloc(nbytes);

    if(!newptr) {
        printf("\n[error] mymalloc fail. [%s:%u (In function ‘%s’)]\n\n", file, line, func);
    }
    else {
        printf("\ncall mymalloc. [%s:%u (In function ‘%s’)]\nmymalloc address: %p\tsize: %u bytes\n\n", file, line, func, newptr, nbytes);
    }

    return newptr;
}

void dbg_myfree(char *file, unsigned line, char *func, void *ap) {
    myfree(ap);

    printf("\ncall myfree. [%s:%u (In function ‘%s’)]\nmyfree address: %p\n", file, line, func, ap);
}

void* dbg_mycalloc(char *file, unsigned line, char *func, unsigned num, unsigned size) {
    void *newptr = (void*)mycalloc(num, size);

    if(!newptr) {
        printf("\n[error] mycalloc fail. [%s:%u (In function ‘%s’)]\n\n", file, line, func);
    }
    else {
        printf("\ncall mycalloc. [%s:%u (In function ‘%s’)]\nmymalloc address: %p\tsize: %u bytes\n\n", file, line, func, newptr, num*size);
    }

    return newptr;
}

void* dbg_myrealloc(char *file, unsigned line, char *func, void *ptr, unsigned size) {
    void *newptr = (void*)myrealloc(ptr, size);

    if(!newptr) {
        printf("\n[error] myrealloc fail. [%s:%u (In function ‘%s’)]\n\n", file, line, func);
    }
    else {
        printf("\ncall myrealloc. [%s:%u (In function ‘%s’)]\nmyrealloc address: %p\tsize: %u bytes\n\n", file, line, func, newptr, size);
    }

    return newptr;
}
