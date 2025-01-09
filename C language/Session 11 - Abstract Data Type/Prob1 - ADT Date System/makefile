# Compiler and flags
CC = gcc
CFLAGS = -IInclude -Wall

# Source files and target
SRCS = mdate.cpp Lib/*.cpp
TARGET = DateSystem.exe

# Rules
all: build

# Build the executable
build:
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)
	@echo 
	@echo
	@echo "Build success! Run with: $(TARGET)"
	

# Clean up
clean:
	rm -f $(TARGET)
	@echo "Cleaned up build files."

# Help command
help:
	@echo "Makefile Commands:"
	@echo "  make           : Compile the project."
	@echo "  make build     : Same as 'make'."
	@echo "  make clean     : Remove build files."
	@echo "  make help      : Show this help message."