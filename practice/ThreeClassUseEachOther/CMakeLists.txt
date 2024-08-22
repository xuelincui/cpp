cmake_minimum_required(VERSION 3.28)
project(ThreeClassUseEachOther)

set(CMAKE_CXX_STANDARD 17)

add_executable(ThreeClassUseEachOther main.cpp
               ../include/class_bar.hpp
               ../include/class_foo.hpp
               ../src/class_bar.cpp
               ../src/class_foo.cpp
               src/class_foo.cpp
               include/class_top.hpp
               src/class_top.cpp
)
