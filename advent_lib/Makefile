OBJECTS=error_handler.o  file_handler.o linked_list.o
CFLAGS=-c -Wall -Werror -fPIC
CC=clang

target: $(OBJECTS)
	$(CC) -shared -o libadvent.dylib $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm *.o
	rm libadvent.so
