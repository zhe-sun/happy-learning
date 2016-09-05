CC = g++
FLAGS = -O2
OBJS = Dockerfile.o Builder.o main.o
TARGET = test-builder-pattern
RM = rm -f

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(FLAGS)

$(OBJS):%.o:%.cpp
	$(CC) -c $(FLAGS) $< -o $@

.PHONY: 
	clean
clean:
	-$(RM) $(TARGET) $(OBJS)

