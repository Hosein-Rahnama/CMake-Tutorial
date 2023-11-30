# Directories
ROOT_DIR := ${patsubst %/,%,${dir ${realpath ${firstword ${MAKEFILE_LIST}}}}}
SRC_DIR := ${ROOT_DIR}/src
OBJ_DIR := ${ROOT_DIR}/obj
BIN_DIR := ${ROOT_DIR}/bin


# Build Variables
MAKE = make --no-print-directory


# Builds the following recipy by default
default:
	@cd ${SRC_DIR} && ${MAKE} all
	@cd ${OBJ_DIR} && ${MAKE} all


# Clean project
clean:
	@cd ${OBJ_DIR} && ${MAKE} clean
	@cd ${BIN_DIR} && ${MAKE} clean


# Debug
debug:
	@cd ${SRC_DIR} && ${MAKE} debug
	@cd ${OBJ_DIR} && ${MAKE} debug