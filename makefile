CC = g++
 
CPPFLAGS = -Wall -g -std=c++11
  
all: toolbox.o project1.o
	g++ -g toolbox.o project1.o -o project1

project1: project1.o
	g++ -g -c project1.cpp

toolbox.o: toolbox.cpp
	g++ -g -c toolbox.cpp
	 
clean:
	rm project1.o
	rm toolbox.o
	rm project1
				 
val:
	valgrind --tool=memcheck --leak-check=full --track-origins=yes --show-
	reachable=yes ./app

