/*
pointer queue header file
*/
#ifndef QUEUE_PTR_H
#define QUEUE_PTR_H

#define CAT(X, Y) X##_##Y
#define TEMPLATE(X, Y) CAT(X, Y)

#ifdef T
#undef T
#endif
#define T char
#include "queue_ptr.c"

#ifdef T
#undef T
#endif
#define T short
#include "queue_ptr.c"

#ifdef T
#undef T
#endif
#define T int
#include "queue_ptr.c"

#ifdef T
#undef T
#endif
#define T long
#include "queue_ptr.c"

#ifdef T
#undef T
#endif
#define T float
#include "queue_ptr.c"

#ifdef T
#undef T
#endif
#define T double
#include "queue_ptr.c"

#endif
