NORM_LIBS=-lpthread
OBJECTS= error_handler.o  file_handler.o linked_list.o
CFLAGS=-g -Wall
CC=gcc

all: $(OBJECTS)
	$(CC) $(CFLAGS) -o chal_1 challenge_1.c $(OBJECTS) $(NORM_LIBS)

%.o: %.c
	$(CC) -c -o $@ $<

clean:
	rm *.o
	rm chal_1