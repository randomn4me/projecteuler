SRC = $(wildcard *.c)
BIN = $(SRC:.c=)

all: $(BIN)

clean: 
	rm -f $(BIN)
