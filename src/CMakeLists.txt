CMAKE_MINIMUM_REQUIRED(VERSION 3.10.0)
PROJECT(HELLO_WORLD VERSION 0.1 LANGUAGES CXX)

add_library(MyClass_lib
            Header_Files/myclass.hpp
            Ressource_Files/myclass.cpp
            )

ADD_EXECUTABLE(CMakeHelloWorld main.cpp )

target_link_libraries(CMakeHelloWorld PRIVATE MyClass_lib)
