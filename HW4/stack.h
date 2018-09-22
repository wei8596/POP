/*
stack header file
*/
#ifndef STACK_H
#define STACK_H

#define CAT(X, Y) X##_##Y
#define TEMPLATE(X, Y) CAT(X, Y)

#ifdef T
#undef T
#endif
#define T char
#include "stack.c"

#ifdef T
#undef T
#endif
#define T short
#include "stack.c"

#ifdef T
#undef T
#endif
#define T int
#include "stack.c"

#ifdef T
#undef T
#endif
#define T long
#include "stack.c"

#ifdef T
#undef T
#endif
#define T float
#include "stack.c"

#ifdef T
#undef T
#endif
#define T double
#include "stack.c"

#endif
