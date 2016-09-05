CC = g++
FLAGS = -O2 -g
OBJS = Apple.o Book.o IFavor.o Daily.o main.o
TARGET = test-lazy_initialization-pattern
RM = rm -f

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(FLAGS)

$(OBJS):%.o:%.cpp
	$(CC) -c $(FLAGS) $< -o $@

.PHONY: clean

clean:
	-$(RM) $(TARGET) $(OBJS)

