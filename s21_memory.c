#include "s21_string.h"
#include <stdio.h>

void *s21_memset(void *str, int c, size_t n) {
  //Заполлняем передаваемым значением
  if (n == 0)
    return str;

  unsigned char *s = str;
  const unsigned char value = (unsigned char)c;

  while (n--) {
    *s++ = value;
  }
  return str;
}

int s21_memcmp(const void *str1, const void *str2, size_t n) {
  const unsigned char *s1 = (const unsigned char *)str1;
  const unsigned char *s2 = (const unsigned char *)str2;
  int result = 0;

  for (size_t i = 0; i < n && !result; i++) {
    result = s1[i] - s2[i];
  }
  return result;
}

void *s21_memcpy(void *dest, const void *src, size_t n) {
  if (dest != NULL && src != NULL) {
    char *ch_dest = (char *)dest;
    char *ch_src = (char *)src;

    for (size_t i = 0; i < n; i++) {
      ch_dest[i] = ch_src[i];
    }
  }
  return dest;
}

void *s21_memchr(const void *str, int c, size_t n) {
  const unsigned char *ch_str = (const unsigned char *)str;
  unsigned char value = (unsigned char)c;
  void *result = NULL;

  for (size_t i = 0; i < n; i++) {
    if (ch_str[i] == value) {
      result = (void *)(ch_str + i);
      break;
    }
  }
  return result;
}