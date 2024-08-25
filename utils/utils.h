/*
 *  utils.h
 *
 *  Date: 2024-07-29
 *  Author: Yaroslava Meleshkevich
 */
#ifndef UTILS_H
#define UTILS_H
#include <regex>
#include <string>

const std::regex NON_DIGITS_REGEX("[^\\d\\.]");

/**
 * @brief Reads a dollar value from the user.
 *
 * This function prompts the user to enter a dollar value and reads
 * the input from the console. It removes all non-digit characters
 * from the input and converts it to a long double. If the input is
 * not a valid dollar value in the format $xx.xx, the function
 * displays an error message and repeats the prompt until a valid
 * input is entered.
 *
 * @param t_label The label to display to prompt the user.
 * @return The dollar value entered by the user as a long double.
 */
long double inputDollarValue(const std::string& t_label);

/**
 * @brief Reads an integer number from the user.
 *
 * This function prompts the user to enter an integer number and reads
 * the input from the console. It removes all non-digit characters
 * from the input and converts it to an integer. If the input is
 * not a valid integer number, the function displays an error message
 * and repeats the prompt until a valid input is entered.
 *
 * @param t_label The label to display to prompt the user.
 * @return The integer number entered by the user.
 */
int inputIntegerNumber(const std::string& t_label);

/**
 * @brief Reads a long double number from the user.
 *
 * This function prompts the user to enter a number and reads
 * the input from the console. It removes all non-digit characters
 * from the input and converts it to a long double. If the input is
 * not a valid number, the function displays an error message and
 * repeats the prompt until a valid input is entered.
 *
 * @param t_label The label to display to prompt the user.
 * @param t_error_message The error message to display when the input is invalid.
 * @return The long double number entered by the user.
 */
long double inputLongDoubleNumber(const std::string& t_label, const std::string& t_error_message);

/**
 * @brief Reads a percent value from the user.
 *
 * This function prompts the user to enter a percent value and reads
 * the input from the console. It removes all non-digit characters
 * from the input and converts it to a long double. If the input is
 * not a valid percent value in the format %xx.xx, the function
 * displays an error message and repeats the prompt until a valid
 * input is entered.
 *
 * @param t_label The label to display to prompt the user.
 * @return The percent value entered by the user as a long double.
 */
long double inputPercentValue(const std::string& t_label);

/**
 * @brief Converts a value to a string representation of dollars.
 *
 * This function takes a value and converts it to a string representation
 * of dollars in the format $xx.xx.
 *
 * @param t_value The value to be converted to dollars.
 * @return The string representation of the value in the format $xx.xx.
 */
std::string toDollars(long double t_value);

#endif //UTILS_H
