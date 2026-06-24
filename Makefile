CC = gcc
CFLAGS = -Wall -Wextra -g -Iinclude

SRC = src/main.c src/parser.c src/executor.c src/builtins.c

TARGET = ashell

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
