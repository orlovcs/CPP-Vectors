vecs: main.o vec.o control.o
	g++ -std=c++14 main.o vec.o control.o -o vecs

vec.o: vec.cpp vec.hpp
	g++ -std=c++14 -c vec.cpp

control.o: control.hpp control.cpp
	g++ -std=c++14 -c control.cpp

main.o: main.cpp
	g++ -std=c++14 -c main.cpp

.PHONY: clean

clean:
	rm *.o
