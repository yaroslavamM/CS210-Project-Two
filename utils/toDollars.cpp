/*
 *  toDollars.cpp
 *
 *  Date: 2024-07-29
 *  Author: Yaroslava Meleshkevich
 */
#include <iomanip>
#include <sstream>
#include <string>

std::string toDollars(long double t_value) {
    std::stringstream ss;
    ss << "$" << std::fixed << std::setprecision(2) << t_value;
    return ss.str();
}