.PHONY:clean all
CC=g++
CFLAGS=-Wall -g
BIN=test_rbegin
all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o $(BIN)

