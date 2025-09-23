CC = gcc
TARGET = main.exe


SRC_FILES = $(wildcard *.c)
OBJ_FILES = $(patsubst %.c,%.o,$(SRC_FILES)) 

all : $(TARGET) clear

$(TARGET) : $(OBJ_FILES)
	$(CC) $(OBJ_FILES) -o $(TARGET)

main.o : main.c
	$(CC) -c main.c -o main.o

func.o : func.c
	$(CC) -c func.c -o func.o

input_check.o : input_check.c
	$(CC) -c input_check.c -o input_check.o

proverka.o : proverka.c
	$(CC) -c proverka.c -o proverka.o

clear :
	rm *.o