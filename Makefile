CC = gcc
Cflags = -Wall -g
Target = list_app
SRCS = main.c list.c
OBJS = $(SRCS:.c=.o)
all : $(Target)
$(Target) : $(OBJS)
	$(CC) $(CFLAGS) -o $(Target) $(OBJS)
%.o: %.c list.h
	$(CC) $(CFlags) -c $< -o $@
clean: 
	rm -f $(OBJS) $(Target)