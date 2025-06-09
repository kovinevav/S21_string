#ifndef S21_STRING_H
#define S21_STRING_H

#include <stddef.h> 

//memory
void* s21_memset(void* str, int c, size_t n);
int   s21_memcmp(const void* str1, const void* str2, size_t n);
void* s21_memcpy(void* dest, const void* src, size_t n);
void* s21_memchr(const void* str, int c, size_t n);

//exmination
size_t s21_strlen(const char* str);
int s21_strncmp(const char* str1, const char* str2, size_t n);
char* s21_strchr(const char* str, int c);
char* s21_strrchr(const char* str, int c);
char* s21_strstr(const char* haystack, const char* needle);
size_t s21_strcspn(const char* str1, const char* str2);

//manipulation
char* strncpy(char* dest, const char* src, size_t n);
char* strncat(char* dest, const char* src, size_t n);
char* strtok(char* str, const char* delim);

//utility
char* my_strerror(int errnum); 
char* my_strpbrk(const char* str1, const char* str2);

#endif