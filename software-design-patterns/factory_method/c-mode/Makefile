#factory.c  factory.h  main.c  product.c  product.h

CC = gcc
OBJECTS := main.o product.o factory.o
main:$(OBJECTS)
	$(CC) -o main $(OBJECTS)

main.o: product.h factory.h
factory.o: product.h factory.h
product.o: product.h

.PHONY:
	clean
clean:
	rm -rf main $(OBJECTS)

