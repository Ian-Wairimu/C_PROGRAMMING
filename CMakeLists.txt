cmake_minimum_required(VERSION 3.20)
project(tutorial C)

set(CMAKE_C_STANDARD 99)

add_executable(tutorial main.c mmm.c switchcase.c header/switchcase.h ifstatement.c ifstatement.c ifstatementcalculator.c header/ifstatementcalculator.h)
