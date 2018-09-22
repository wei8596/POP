/*
linked list header file
*/
#ifndef LIST_H
#define LIST_H

#define CAT(X, Y) X##_##Y
#define TEMPLATE(X, Y) CAT(X, Y)

#ifdef T
#undef T
#endif
#define T char
#include "list.c"

#ifdef T
#undef T
#endif
#define T short
#include "list.c"

#ifdef T
#undef T
#endif
#define T int
#include "list.c"

#ifdef T
#undef T
#endif
#define T long
#include "list.c"

#ifdef T
#undef T
#endif
#define T float
#include "list.c"

#ifdef T
#undef T
#endif
#define T double
#include "list.c"

#endif
