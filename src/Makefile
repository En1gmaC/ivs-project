################################################################################
## @file     Makefile
## @date     25.4.2023
## @author   Ota Vlcek & Petr Balcar
################################################################################

## flags
CXX=g++
CFLAGS=-std=c++14 -pg -g

## all (přeloží projekt – včetně programu pro profiling)
all: profile
	cd source/ && qmake && make
	cd tests/ && cmake . && make
	
## profile (spustí překlad programu pro výpočet směrodatné odchylky na profiling)
profile:
	cd profiling/ && $(CXX) $(CFLAGS) stdev.cpp -o stdev

## clean (smaže všechny soubory, co nemají být odevzdány)
clean:
	cd source/ && make clean && rm Makefile
	cd tests/ && make clean && rm Makefile && rm CMakeCache.txt && rm -r CMakeFiles && rm cmake_install.cmake
	cd profiling/ && rm stdev
	rm -r html
	
## run (spustí program)
run: all
	cd source/ && ./CalcuLux
	
## test (spustí testy matematické knihovny)
test:
	cd tests/ && cmake . && make &&./test
	
## pack (zabalí projekt tak, aby mohl být odevzdán)
pack: clean
	cd ../ && zip -r xbalca11_xvlcek31_xknazo02_xpocar01.zip *

## doc (spustí generování dokumentace)
doc:
	doxygen Doxyfile