# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89

# Linear search files
LINEAR_SRC = 0-main.c 0-linear.c
LINEAR_OBJ = $(LINEAR_SRC:.c=.o)
LINEAR_TARGET = 0-linear

# Binary search files
BINARY_SRC = 1-main.c 1-binary.c
BINARY_OBJ = $(BINARY_SRC:.c=.o)
BINARY_TARGET = 1-binary

# Default target builds both programs
all: $(LINEAR_TARGET) $(BINARY_TARGET)

# Rules for building the linear search program
$(LINEAR_TARGET): $(LINEAR_OBJ)
	$(CC) $(CFLAGS) $(LINEAR_OBJ) -o $(LINEAR_TARGET)

# Rules for building the binary search program
$(BINARY_TARGET): $(BINARY_OBJ)
	$(CC) $(CFLAGS) $(BINARY_OBJ) -o $(BINARY_TARGET)

# Compile rule for object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove object files
clean:
	rm -f $(LINEAR_OBJ) $(BINARY_OBJ)

# Full clean rule to remove object files and executables
fclean: clean
	rm -f $(LINEAR_TARGET) $(BINARY_TARGET)

# Rebuild rule (clean and build)
re: fclean all

# PHONY targets to avoid conflicts with file names
.PHONY: all clean fclean re

