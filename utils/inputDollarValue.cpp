/*
 *  inputDollarValue.cpp
 *
 *  Date: 2024-07-29
 *  Author: Yaroslava Meleshkevich
 */
#include "utils.h"

long double inputDollarValue(const std::string& t_label) {
    return inputLongDoubleNumber(t_label, "Enter a number as $xx.xx");
}
