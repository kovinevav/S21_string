#include "s21_string.h"
#include <stdio.h>

size_t s21_strlen(const char* str) {
    size_t len = 0;
    
    while (*str){
       len++;
       str++;
    }
    return len;
}

int s21_strcmp(const char* str1, const char* str2) {
    int result = 0;
    if (s21_strlen(str1) == s21_strlen(str2)) {
        while (*str1) {
            if (*str1 != *str2) return (*str1 - *str2);
            *str1++;
            *str2++;
        }

        return result;

    }


// при одинаковых значениях левое короче, то "-""
//ab aa = 1
//aa ab = -1
}