CC=g++

all: LABA5 clean run

LABA5:
	$(CC) -c main.cpp 
	$(CC) -c BlackList.cpp 
	$(CC) -c Auth.cpp 
	$(CC) -o hi.exe main.o BlackList.o Auth.o

clean:
	del "main.o"
	del "BlackList.o"
	del "Auth.o"
run:
	./hi.exe