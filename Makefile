CC = gcc
SRC = $(wildcard src/*.c) $(wildcard src/utils/*.c)
OBJDIR = objdir/
obj = $(SRC:.c=.o)

CFLAGS = -lm

output: $(obj)
	$(CC) $^ -o $@ $(CFLAGS)

%.o: %.c $(SRC)
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) main

