/*
pointer stack header file
*/
#ifndef STACK_PTR_H
#define STACK_PTR_H

#define CAT(X, Y) X##_##Y
#define TEMPLATE(X, Y) CAT(X, Y)

#ifdef T
#undef T
#endif
#define T char
#include "stack_ptr.c"

#ifdef T
#undef T
#endif
#define T short
#include "stack_ptr.c"

#ifdef T
#undef T
#endif
#define T int
#include "stack_ptr.c"

#ifdef T
#undef T
#endif
#define T long
#include "stack_ptr.c"

#ifdef T
#undef T
#endif
#define T float
#include "stack_ptr.c"

#ifdef T
#undef T
#endif
#define T double
#include "stack_ptr.c"

#endif
