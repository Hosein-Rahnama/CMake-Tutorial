cmake_minimum_required(VERSION 3.16)

project(Euclidean_Geometry)

# Set variables
set(LIBRARY_NAME "geom")

# Add subdirectories
add_subdirectory(include)
add_subdirectory(src)

# Use `-DBUILD_EXAMPLES=ON/OFF`to pass this option to `cmake` command
option(BUILD_EXAMPLES "Whether to build examples" OFF)
if (BUILD_EXAMPLES)
    message(STATUS "Building examples ...")
    add_subdirectory(examples)
endif()