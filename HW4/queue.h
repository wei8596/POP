/*
queue header file
*/
#ifndef QUEUE_H
#define QUEUE_H

#define CAT(X, Y) X##_##Y
#define TEMPLATE(X, Y) CAT(X, Y)

#ifdef T
#undef T
#endif
#define T char
#include "queue.c"

#ifdef T
#undef T
#endif
#define T short
#include "queue.c"

#ifdef T
#undef T
#endif
#define T int
#include "queue.c"

#ifdef T
#undef T
#endif
#define T long
#include "queue.c"

#ifdef T
#undef T
#endif
#define T float
#include "queue.c"

#ifdef T
#undef T
#endif
#define T double
#include "queue.c"

#endif
