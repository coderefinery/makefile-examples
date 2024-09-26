# Define directories
SOURCE_DIR := src
BINARY_DIR := bin

# Define source files
SOURCES := $(wildcard $(SOURCE_DIR)/*.c)
OBJECTS := $(patsubst $(SOURCE_DIR)/%.c, $(BINARY_DIR)/%.o, $(SOURCES))

# Required directories
REQUIRED_DIRS = bin
_MKDIRS := $(shell for d in $(REQUIRED_DIRS); \
             do                               \
					 [[ -d $$d ]] || mkdir -p $$d; \
				 done)

# Compiler and flags
CC := gcc
CFLAGS := -I include -Wall -g

# Target to build all
all: $(BINARY_DIR)/calculation.exe

# Rule to link the program
$(BINARY_DIR)/calculation.exe: $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile source files
$(BINARY_DIR)/%.o: $(SOURCE_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean up
clean:
	rm -f $(BINARY_DIR)/*.o $(BINARY_DIR)/calculation.exe

# Include directories for source files
vpath %.c $(SOURCE_DIR)
