cmake_minimum_required(VERSION 3.10)
project(mlpack_conan_project)

set(CMAKE_CXX_STANDARD 14)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(mlpack_conan_project kmeans_mlpack.cpp)
target_link_libraries(mlpack_conan_project ${CONAN_LIBS})
