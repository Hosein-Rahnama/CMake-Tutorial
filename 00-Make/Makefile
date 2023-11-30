# Build the following recipies by default
all: geom tip


# Build the geom program
geom: geom.o util.o
	g++ geom.o util.o -o geom

geom.o: geom.cpp util.hpp
	g++ -c geom.cpp


# Build the tip program
tip: tip.o util.o
	g++ tip.o util.o -o tip

tip.o: tip.cpp util.hpp
	g++ -c tip.cpp


# Build util library
util.o: util.cpp
	g++ -c util.cpp


# Clean project
clean:
	rm -f *.o tip geom