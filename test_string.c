#include "string.h"

int test_memcmp() {
  const char * s1 = "asdfasdfasdfasdf";
  const char * s2 = "asdfasdfasdfasdf";
  const char * s3 = "asdfasdf";
  const char * s3 = "asdfasda";

  // compare the same string, should return 0
  int test1 = memcmp(s1, s2, 20);

  // compare strings of different lengths, should return -1
  int test2 = memcmp(s1, s3, 20);

  // compare different strings, should return -1
  int test3 = memcmp(s2, s3, 20);

}

int test_memcpy() {

}

int test_memset() {

}

int test_strlen() {

}

int test_strnlen() {

}

int test_strcmp() {

}

int test_strncmp() {

}
