# Makefile for `Prototype.hpp  Prototype.cpp`

CC = g++
OBJECTS := Prototype.o 
app:$(OBJECTS)
	$(CC) -o app $(OBJECTS)

Prototype.o: Prototype.hpp

.PHONY:
	clean
clean:
	rm -rf app $(OBJECTS)
