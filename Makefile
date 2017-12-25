CC=g++
CFLAGS= -c -std=c++14
vecs:  main.o control.o vec.o
$(CC) main.o control.o vec.o -o vecs
main.o: main.cpp
$(CC) $(CFLAGS) main.cpp
control.o: control.hpp
$(CC) $(CFLAGS) control.hpp
vec.o: vec.hpp
$(CC) $(CFLAGS) vec.hpp
