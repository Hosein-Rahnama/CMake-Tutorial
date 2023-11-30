add_executable(translate translate.cpp)

target_link_libraries(
    translate
    PRIVATE ${LIBRARY_NAME}
)