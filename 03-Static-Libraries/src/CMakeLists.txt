# Add the library
add_library(${LIBRARY_NAME} point.cpp)

# Determine the include folder for the library
target_include_directories(
    ${LIBRARY_NAME}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

# Install the library with `sudo make install`
set_target_properties(
    ${LIBRARY_NAME}
    PROPERTIES PUBLIC_HEADER ${CMAKE_SOURCE_DIR}/include/geom/point.hpp
    )

install(
    TARGETS ${LIBRARY_NAME}
    LIBRARY DESTINATION lib
    PUBLIC_HEADER DESTINATION include/${LIBRARY_NAME}
)