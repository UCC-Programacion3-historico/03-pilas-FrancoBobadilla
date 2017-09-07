cmake_minimum_required(VERSION 3.2)
project(02_Listas)

set(CMAKE_CXX_STANDARD 11)

# Agrego todos los test.
add_subdirectory(test)

set(SOURCE_FILES_01 Ej-01/main.cpp Pila/Pila.h Pila/Nodo.h)
add_executable(Ej-01 ${SOURCE_FILES_01})

set(SOURCE_FILES_02 Ej-02/main.cpp)
add_executable(Ej-02 ${SOURCE_FILES_02})

set(SOURCE_FILES_03 Ej-03/main.cpp)
add_executable(Ej-03 ${SOURCE_FILES_03})

set(SOURCE_FILES_04 Ej-04/main.cpp)
add_executable(Ej-04 ${SOURCE_FILES_04})

set(SOURCE_FILES_05 Ej-05/main.cpp)
add_executable(Ej-05 ${SOURCE_FILES_05})
