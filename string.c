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

void * memset(void *b, int c, size_t len) {
  unsigned char * buffer = (unsigned char*)b;

  for (size_t i = 0; i < len; i++) {
    buffer[i] = (unsigned char)c;
  }

  return b;
}



