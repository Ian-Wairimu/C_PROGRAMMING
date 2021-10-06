cmake_minimum_required(VERSION 3.20)
project(tutorial C)

set(CMAKE_C_STANDARD 99)

add_executable(tutorial main.c switchcasecalculator.c header/switchcasecalculator.h ifstatement.c ifstatement.c ifstatementcalculator.c header/ifstatementcalculator.h FunctionC.c header/FunctionC.h FucntionCalculator.c header/FucntionCalculator.h oneDimension.c header/oneDimension.h twoDimensional.c header/twoDimensional.h InputArray.c arrayArgs.c HelloWorld.c variables.c pointers.c header/pointers.h FunctionPasByValue.c FunctionPointerReference.c PointerOneDArray.c ForLoop.c)
