# Directories
OBJ_DIR := ${patsubst %/,%,${dir ${realpath ${firstword ${MAKEFILE_LIST}}}}}
BIN_DIR := ${patsubst %obj,%bin,${OBJ_DIR}}


# Build variables
geom = ${BIN_DIR}/geom
tip = ${BIN_DIR}/tip


# Build the following recipies by default
all: ${geom} ${tip}


# Build the geom program
${geom}: geom.o util.o
	g++ geom.o util.o -o ${BIN_DIR}/geom


# Build the tip program
${tip}: tip.o util.o
	g++ tip.o util.o -o ${BIN_DIR}/tip

# Remove object files
clean:
	rm -f *.o

# Debug
debug:
	@echo ${BIN_DIR}