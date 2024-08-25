/*
 *  inputLongDoubleNumber.cpp
 *
 *  Date: 2024-07-29
 *  Author: Yaroslava Meleshkevich
 */
#include <iostream>
#include <regex>
#include <string>

#include "utils.h"

long double inputLongDoubleNumber(const std::string& t_label, const std::string& t_error_message) {
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
            // Convert it to a long double, it will throw an invalid_argument if the number is not valid
            return stold(only_digits);
        }
        catch (const invalid_argument& _) {
            // Show an error message and repeat the loop
            cout << t_error_message << endl;
        }
    }
}
