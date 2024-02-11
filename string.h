#ifndef STRING_H
#define STRING_H

#define NULL ((void *)0)

typedef long unsigned int size_t;


// Concatenation
char * strcat(char *restrict s1, const char *restrict s2);
char * strncat(char *restrict s1, const char *restrict s2, size_t n);

// Copying
void * memcpy(void *restrict dst, const void *restrict src, size_t n);
void * memmove(void *dst, const void *src, size_t n);
char * strcpy(char *s1, const char *src);
char * strncpy(char *s1, const char *src, size_t n);

// Comparison
int memcmp(const void *s1, const void *s2, size_t n);
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
int strcoll(const char *s1, const char *s2);
size_t strxfrm(char *restrict s1, const char *restrict s2, size_t n);

// Searching


// Other
void * memset(void *b, int c, size_t n);
size_t strlen(const char *s);
size_t strnlen(const char *s, size_t n);



#endif

