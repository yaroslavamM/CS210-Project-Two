/*
 *  InterestCalculator.cpp
 *
 *  Date: 2024-07-29
 *  Author: Yaroslava Meleshkevich
 */
#include <iomanip>
#include <iostream>
#include <sstream>
#include <tuple>

#include "InterestCalculator.h"
#include "utils/utils.h"

std::unique_ptr<InterestCalculator> InterestCalculator::initialize() {
    using namespace std;
    cout << "********************************" << endl;
    cout << "********** Data Input **********" << endl;
    // Input user's values to initialize an InterestCalculator
    const long double initial_amount = inputDollarValue("Initial Investment Amount: ");
    const long double monthly_deposit = inputDollarValue("Monthly deposit: ");
    const long double annual_interest = inputPercentValue("Annual Interest: ");
    const int years = inputIntegerNumber("Number of years: ");
    // Wait for user
    cout << "Press Enter to continue..." << endl;
    cin.get();
    // Creates a new InterestCalculator
    return unique_ptr<InterestCalculator>(
        new InterestCalculator(initial_amount, monthly_deposit, annual_interest, years));
}

std::tuple<long double, long double>
InterestCalculator::calculateAnnualInterest(const long double t_opening_amount,
    const long double t_monthly_deposit) const {
    // Calculate annual interest if the monthly deposit is less then a penny
    if (t_monthly_deposit < 0.01) {
        auto interest = t_opening_amount * (this->m_annual_interest / 100);
        return std::make_tuple(t_opening_amount + interest, interest);
    }
    auto amount = t_opening_amount;
    double long interest = 0.0;
    // Calculate interest plus monthy deposit per month
    for (int month = 0; month < 12; month++) {
        // Update the total ammount to include a monthly deposit
        amount = amount + t_monthly_deposit;
        // Calculate monthly interest
        const auto monthly_interest = amount * ((this->m_annual_interest / 100) / 12);
        interest = interest + monthly_interest;
        // Update a total amount to include collected interest
        amount = amount + monthly_interest;
    }
    return std::make_tuple(amount, interest);
}

void InterestCalculator::printYearlyReport(const std::string& t_title, const long double t_monthly_deposit) const {
    using namespace std;
    cout << "    " << t_title << endl;
    cout << "==============================================================" << endl;
    cout << "  Year        Year End Balance     Year End Earned Interest   " << endl;
    cout << "--------------------------------------------------------------" << endl;
    auto balance = this->m_initial_investment;
    // Calculate and print the balance and interest by each year
    for (int year = 1; year <= this->m_number_of_years; year++) {
        cout << setw(6) << year << "   ";
        auto [closing_amount, interest] = this->calculateAnnualInterest(balance, t_monthly_deposit);
        cout << setw(20) << toDollars(closing_amount) << "   ";
        cout << setw(26) << toDollars(interest) << endl;
        cout << endl;
        balance = closing_amount;
    }
    cout << endl;
}

void InterestCalculator::printYearlyReports() const {
    this->printYearlyReport("Balance and Interest Without Additional Monthly Deposits", 0.0);
    this->printYearlyReport("Balance and Interest With Additional Monthly Deposits", this->m_monthly_deposit);
}
