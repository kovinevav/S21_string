#include <check.h>
#include "../s21_string.h"


START_TEST(test_memory_zero_fill) {
    char buffer[10] = "abcdefghij";
    char s21_buffer[10] = "abcdefghij";
    memset(buffer, 0, 5);
    s21_memset(s21_buffer, 0, 5);
    ck_assert_mem_eq(buffer, s21_buffer, 10);

}
END_TEST