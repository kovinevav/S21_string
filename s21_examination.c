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

int s21_strncmp(const char* str1, const char* str2, size_t n) {
    int result = 0;
    for (size_t i = 0; i < n; i++) {
        printf("log str1:%c  str2:%c\n", str1[i], str2[i]);    
        if (str1[i] != str2[i]) {
            result =((unsigned char) str1[i] > (unsigned char) str2[i] ? 1: -1);
            break;
        }      
    }
    return result;

}