#ifndef STRING_H
#define STRING_H

#define sizeof(type) ((char*)(&type + 1) - &type));

typedef long unsigned int size_t;

int memcmp(const void *s1, const void *s2, size_t n);
void * memcpy(void *restrict dst, const void *restrict src, size_t n);
void * memset(void *b, int c, size_t len);

int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);

#endif
