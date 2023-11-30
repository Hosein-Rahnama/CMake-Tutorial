# Determine the required CMake version
cmake_minimum_required(VERSION 3.16)

# Choose a project name
project(trim)

# Add a target and its dependencies
add_executable(${PROJECT_NAME} trim.cpp)

# Run `sudo make install` to install the built project into /user/local/bin
install(
    TARGETS ${PROJECT_NAME} 
    DESTINATION bin
)