/*
 *  inputIntegerNumber.cpp
 *
 *  Date: 2024-07-29
 *  Author: Yaroslava Meleshkevich
 */
#include <iostream>
#include <regex>
#include <string>

#include "utils.h"

int inputIntegerNumber(const std::string& t_label) {
    using namespace std;
    // Repeat until we have a valid number
    while (true) {
        string line;
        cout << t_label;
        // Read a line
        getline(cin, line);
        // Remove all non-digit characters
        auto only_digits = regex_replace(line, NON_DIGITS_REGEX, "");
        try {
            // Convert it to an integer, it will throw an invalid_argument if the number is not valid
            // Check if it is a positive
            if (const auto number = stoi(only_digits); number > 0) {
                return number;
            }
        }
        catch (const invalid_argument& _) {
            // Show an error message and repeat the loop
            cout << "Enter a positive integer number" << endl;
        }
    }
}
