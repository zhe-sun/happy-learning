# Makefile for `Multiton.hpp  Multiton.cpp`

CC = g++
OBJECTS := Multiton.o 
multiton:$(OBJECTS)
	$(CC) -o App $(OBJECTS)

Multiton.o: Multiton.hpp

.PHONY:
	clean
clean:
	rm -rf multiton $(OBJECTS)
