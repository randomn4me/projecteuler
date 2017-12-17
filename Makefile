SRC = $(wildcard *.c)
BIN = $(SRC:.c=)

CFLAGS	= -Wall -O2

all: $(BIN)

clean: 
	rm -f $(BIN)
