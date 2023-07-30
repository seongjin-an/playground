.SUFFIXES : .c .o
CC = gcc
CFLAGS = -g -Wall -ansi -std=c99
all: test

OBJS = Graph.o Test_Graph.o
# SRCS = $(OBJS:.o=.c)

test: $(OBJS)
	$(CC) -o app.out $(OBJS) 

clean: 
	rm -rf $(OBJS)
distclean: 
	rm -rf $(OBJS) app.out test
# https://modoocode.com/311
# https://velog.io/@resister_boy/C%EC%96%B8%EC%96%B4-Makefile%EC%97%90-%EB%8C%80%ED%95%98%EC%97%AC