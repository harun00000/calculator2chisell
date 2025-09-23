CC = gcc
TARGET = main.exe

# PREF_OBJ = ./bin/

SRC_FILES = $(wildcard *.c)
# main.c func.c input_check.c proverka.c -> main.o ...
# # main.c func.c input_check.c proverka.c -> % -> main -> func -> input_check -> proverka
OBJ_FILES = $(patsubst %.c,%.o,$(SRC_FILES)) # pattern substution 

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