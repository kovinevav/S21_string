CC = gcc
FLAGS = -Wall -Wextra -Werror -std=c11
TARGET = main
SRC = s21_memory.c s21_examination.c  main.c
TEST_LIBS = -lcheck -lm -lpthread
TEST_SRC = tests/test_memory.c

$(TARGET):
	$(CC) $(FLAGS) $(SRC) -o $(TARGET)

test:
	$(CC) $(FLAGS) $(SRC) $(TEST_SRC) -I. $(TEST_LIBS) -o test_memory
	./test_memory

clean:
	rm -f $(TARGET) test_memory
