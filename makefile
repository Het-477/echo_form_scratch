CC = gcc
FLAGS = -Wall 
TARGET = my_echo

all:
	${CC} ${FLAGS} main.c -o ${TARGET}

run: 
	./${TARGET} hello 	everyone