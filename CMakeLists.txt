cmake_minimum_required(VERSION 3.12)
project(VandervurdTemplates)

set(CMAKE_CXX_STANDARD 17)

add_executable(VandervurdTemplates main.cpp basics/maxtypesamples.h basics/maxtypesamples.cpp chapter1/chapter1.cpp chapter1/chapter1.h chapter2/chapter2.cpp chapter2/chapter2.h main.cpp moving/moving.cpp moving/moving.h chapter2/stack_specialization.cpp)