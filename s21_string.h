#ifndef S21_STRING_H
#define S21_STRING_H

#include <stddef.h> 

//memory
void* s21_memset(void* str, int c, size_t n);
int   s21_memcmp(const void* str1, const void* str2, size_t n);
void* s21_memcpy(void* dest, const void* src, size_t n);
void* s21_memmove(void* dest, const void* src, size_t n);
void* s21_memchr(const void* str, int c, size_t n);

//exmination
size_t s21_strlen(const char* str);
int s21_strcmp(const char* str1, const char* str2);
int s21_strncmp(const char* str1, const char* str2, size_t n);
char* s21_strchr(const char* str, int c);
char* s21_strrchr(const char* str, int c);
char* s21_strstr(const char* haystack, const char* needle);
size_t s21_strspn(const char* str1, const char* str2);
size_t s21_strcspn(const char* str1, const char* str2);

//manipulation
char* my_strcpy(char* dest, const char* src);
char* my_strncpy(char* dest, const char* src, size_t n);
char* my_strcat(char* dest, const char* src);
char* my_strncat(char* dest, const char* src, size_t n);
char* my_strtok(char* str, const char* delim);

//utility
char* my_strerror(int errnum); 
char* my_strdup(const char* str);
char* my_strpbrk(const char* str1, const char* str2);

#endif