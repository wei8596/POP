#ifndef MM_DEBUG_H
#define MM_DEBUG_H
#include "mm.h"

#ifdef DEBUGGER

#define mymalloc(nbytes) dbg_mymalloc(__FILE__, __LINE__, __FUNCTION__, nbytes);
#define myfree(ap) dbg_myfree(__FILE__, __LINE__, __FUNCTION__, ap);
#define mycalloc(num, size) dbg_mycalloc(__FILE__, __LINE__, __FUNCTION__, num, size);
#define myrealloc(ptr, size) dbg_myrealloc(__FILE__, __LINE__, __FUNCTION__, ptr, size);

void* dbg_mymalloc(const char *file, unsigned line, const char *func, unsigned nbytes);
void dbg_myfree(const char *file, unsigned line, const char *func, void *ap);
void* dbg_mycalloc(const char *file, unsigned line, const char *func, unsigned num, unsigned size);
void* dbg_myrealloc(const char *file, unsigned line, const char *func, void *ptr, unsigned size);

#endif

#endif
