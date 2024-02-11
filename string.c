#include "string.h"

int memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char * a = (const unsigned char*)s1;
  const unsigned char * b = (const unsigned char*)s2;

  for (size_t i = 0; i < n; i++) {
    if (a[i] < b[i]) {
    
  return -1;
    } else if (b[i] < a[i]) {
      return 1;
    }
  }

  return 0;
}

void * memcpy(void *restrict dst, const void *restrict src, size_t n) {
  unsigned char* dstPtr = (unsigned char*)dst;
  const unsigned char* srcPtr = (const unsigned char*)src;

  if (dstPtr < srcPtr) {
    for (size_t i = 0; i < n; i++) {
      dstPtr[i] = srcPtr[i];
    }
  } else {
    for (size_t i = n; i != 0; i--) {
      dstPtr[i-1] = srcPtr[i-1];
    }
  }

  return dst;
}

void * memset(void *b, int c, size_t n) {
  unsigned char * buffer = (unsigned char*)b;

  for (size_t i = 0; i < n; i++) {
    buffer[i] = (unsigned char)c;
  }

  return b;
}

size_t strlen(const char *s) {
  if (s == NULL) {
    return 0;
  }
  for (size_t i = 0;; ++i) {
    if (s[i] == '\0') {
      return i;
    }
  }
}

size_t strnlen(const char *s, size_t n) {
   if (s == NULL) {
    return 0;
  }
  for (size_t i = 0; i < n; ++i) {
    if (s[i] == '\0') {
      return i;
    } else {
      return n;
    }
  }
}

int strcmp(const char *s1, const char *s2) {

}

int strncmp(const char *s1, const char *s2, size_t n) {

  for (size_t i = 0; i < n; i++) {

  }

  return 0;
}

