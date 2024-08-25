/*
 *  main.cpp
 *
 *  Date: 2024-07-29
 *  Author: Yaroslava Meleshkevich
 */
#include "InterestCalculator.h"

int main() {
    // Create a new InterestCalculator using user's input
    const auto calculator = InterestCalculator::initialize();
    // Calculate reports
    calculator->printYearlyReports();
    return 0;
}
