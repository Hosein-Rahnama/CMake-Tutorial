# Directories
SRC_DIR := ${patsubst %/,%,${dir ${realpath ${firstword ${MAKEFILE_LIST}}}}}
OBJ_DIR := ${patsubst %src,%obj,${SRC_DIR}}


# Build variables
geom.o = ${OBJ_DIR}/geom.o
tip.o = ${OBJ_DIR}/tip.o
util.o = ${OBJ_DIR}/util.o


# Build the following recipies by default
all: ${geom.o} ${tip.o} ${util.o}


# Build the geom program
${geom.o}: geom.cpp util.hpp
	g++ -c geom.cpp -o ${OBJ_DIR}/geom.o


# Build the tip program
${tip.o}: tip.cpp util.hpp
	g++ -c tip.cpp -o ${OBJ_DIR}/tip.o


# Build util library
${util.o}: util.cpp
	g++ -c util.cpp -o ${OBJ_DIR}/util.o

# Debug
debug:
	@echo ${OBJ_DIR}