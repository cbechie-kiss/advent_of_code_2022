LIB_NAME=libadvent.dylib
CFILES=error_handler.c file_handler.c linked_list.c
CC=clang


all: $(OBJECTS)
	$(CC) -dynamiclib $(CFILES)  -o $(LIB_NAME)

clean:
	rm *.o
	rm $(LIB_NAME)
