cmake_minimum_required(VERSION 3.10)

project(MLP)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(custard-flow)




set(SOURCES
    src/mlp.cpp
)

add_executable(mlp ${SOURCES})

target_link_libraries(mlp custard-flow)