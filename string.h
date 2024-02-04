#ifndef STRING_H
#define STRING_H

#include "stdlib.h"

int memcmp(const void *s1, const void *s2, size_t n);
void * memcpy(void *restrict dst, const void *restrict src, size_t n);
void * memset(void *b, int c, size_t len);

size_t strlen(const char *s);
size_t strnlen(const char *s, size_t maxlen);
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);

#endif

