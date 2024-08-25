cmake_minimum_required(VERSION 3.28)
project(CS_210_Project_Two)

set(CMAKE_CXX_STANDARD 17)

add_executable(CS_210_Project_Two main.cpp
        InterestCalculator.cpp
        InterestCalculator.h
        utils/utils.h
        utils/inputDollarValue.cpp
        utils/inputPercentValue.cpp
        utils/inputLongDoubleNumber.cpp
        utils/inputIntegerNumber.cpp
        utils/toDollars.cpp)
