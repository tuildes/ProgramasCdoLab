OBJS	= programa.o biblioteca.o
SOURCE	= programa.c biblioteca.c
HEADER	= biblioteca.h
OUT	= programa
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = -lm

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

programa.o: programa.c
	$(CC) $(FLAGS) programa.c 

biblioteca.o: biblioteca.c
	$(CC) $(FLAGS) biblioteca.c 

clean:
	rm -f $(OBJS) $(OUT)