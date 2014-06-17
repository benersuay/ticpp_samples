cmake_minimum_required (VERSION 2.6)
project (xmlgenerator)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
include_directories(${PROJECT_SOURCE_DIR}/include)
link_directories(${PROJECT_SOURCE_DIR}/lib)

add_executable(sample src/sample.cpp)
target_link_libraries(sample "-lticpp")

add_executable(simple_generator src/simple_generator.cpp)
target_link_libraries(simple_generator "-lticpp")


