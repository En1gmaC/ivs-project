CXX=g++
CFLAGS=-std=c++14 -pg -g


all: profile
	cd source/ && qmake && make
	cd tests/ && cmake . && make
	

profile:
	
	cd profiling/ && $(CXX) $(CFLAGS) stdev.cpp -o stdev


clean:
	cd source/ && make clean && rm Makefile
	cd tests/ && make clean && rm Makefile && rm CMakeCache.txt && rm -r CMakeFiles && rm cmake_install.cmake
	cd profiling/ && rm stdev.o && rm stdev

run: all
	cd source/ && ./CalcuLux

test:
	cd tests/ && cmake . && make &&./test

pack: clean

