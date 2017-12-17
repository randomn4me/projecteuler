SRC = $(wildcard *.c)
BIN = $(SRC:.c=)

LDFLAGS = -lm
CFLAGS	= -Wall -O2

all: $(BIN)

clean: 
	rm -f $(BIN)
