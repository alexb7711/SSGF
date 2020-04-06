all: main.o Game.o
	g++ -o example main.o Game.o -Wall -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	g++ -c main.cpp 

Game.o:
	g++ -c ../src/Game.cpp 
