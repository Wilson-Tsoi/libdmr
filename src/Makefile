CC = gcc
CFLAGS = -Wall -Wextra -std=c99 
OBJ = main.o hash.o

main.o: main.c dmr.h
	$(CC) $(CFLAGS) -c main.c

hash.o: hash.c dmr.h
	$(CC) $(CFLAGS) -c hash.c
	
clean:
	rm $(OBJ)