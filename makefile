CC = gcc
FLAGS= -Wall -g

txtfind.o: txtfind.c 											
	$(CC) -c $(FLAGS) txtfind.c 

isort.o: isort.c 											
	$(CC) -c $(FLAGS) isort.c 
  
isort: isort.o
	$(CC) -o isort isort.o
  
txtfind: txtfind.o
	$(CC) -o txtfind txtfind.o 

all: isort txtfind

clean:
	rm -f *.o isort txtfind
