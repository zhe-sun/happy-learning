# Makefile for `Factory.hpp  Main.cpp  Product.hpp`

CC = g++
OBJECTS := Main.o 
App:$(OBJECTS)
	$(CC) -o App $(OBJECTS)

Main.o: Product.hpp Factory.hpp

.PHONY:
	clean
clean:
	rm -rf App $(OBJECTS)
