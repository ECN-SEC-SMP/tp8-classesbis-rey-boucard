main: main.o Animal.o Attaque.o Pierre.o Lion.o
	g++ -o main main.o Animal.o Attaque.o Pierre.o Lion.o
main.o: main.cpp
	g++ -c main.cpp
Animal.o: Animal.cpp
	g++ -c Animal.cpp
Attaque.o: Attaque.cpp
	g++ -c Attaque.cpp
Pierre.o: Pierre.cpp
	g++ -c Pierre.cpp
Lion.o: Lion.cpp
	g++ -c Lion.cpp
