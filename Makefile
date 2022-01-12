
all: start 

start: main.o modules.o
	g++ -g main.o 1-5.o 6-10.o analysis1.o analysis2.o -o main

main.o:
	g++ -c main.cpp 


modules.o: middle_list.h 1-5.cpp 6-10.cpp analysis1.cpp analysis2.cpp
	g++ -c middle_list.h 1-5.cpp 6-10.cpp analysis1.cpp analysis2.cpp


clean:
	rm *.o
