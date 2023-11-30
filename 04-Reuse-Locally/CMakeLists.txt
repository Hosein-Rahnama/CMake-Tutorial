cmake_minimum_required(VERSION 3.16)

project(reuse)

add_executable(main main.cpp)

target_link_libraries(main geom)

target_link_directories(
    main
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/geom
)