/*
pointer linked list header file
*/
#ifndef LIST_PTR_H
#define LIST_PTR_H
#include "mm.h"

#define CAT(X, Y) X##_##Y
#define TEMPLATE(X, Y) CAT(X, Y)

#ifdef T
#undef T
#endif
#define T char
#include "list_ptr.c"

#ifdef T
#undef T
#endif
#define T short
#include "list_ptr.c"

#ifdef T
#undef T
#endif
#define T int
#include "list_ptr.c"

#ifdef T
#undef T
#endif
#define T long
#include "list_ptr.c"

#ifdef T
#undef T
#endif
#define T float
#include "list_ptr.c"

#ifdef T
#undef T
#endif
#define T double
#include "list_ptr.c"

#endif
