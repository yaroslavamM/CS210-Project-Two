/*
 *  InterestCalculator.h
 *
 *  Date: 2024-07-29
 *  Author: Yaroslava Meleshkevich
 */
#ifndef INTERESTCALCULATOR_H
#define INTERESTCALCULATOR_H
#include <memory>
#include <string>
#include <tuple>


class InterestCalculator {
    /**
     * @brief The initial investment amount.
     *
     * This variable represents the initial amount of money invested in an investment.
     */
    long double m_initial_investment;

    /**
     * @brief The monthly deposit amount.
     *
     * This variable represents the amount of money deposited into the investment account on a monthly basis.
     */
    long double m_monthly_deposit;

    /**
     * @brief The annual interest rate.
     *
     * This variable represents the annual interest rate for an investment.
     */
    long double m_annual_interest;

    /**
     * @brief The number of years the investment will be made for.
     *
     * This variable represents the duration of the investment in years.
     * The value should be a positive integer.
     */
    int m_number_of_years;

    /**
     * @param t_initial_investment The initial investment amount.
     * @param t_monthly_deposit The monthly deposit amount.
     * @param t_annual_interest The annual interest rate.
     * @param t_number_of_years The number of years the investment will be made for.
     *
     * @return An initialized instance of the InterestCalculator class.
     */
    InterestCalculator(const long double t_initial_investment, const long double t_monthly_deposit,
        const long double t_annual_interest, const int t_number_of_years) {
        this->m_initial_investment = t_initial_investment;
        this->m_monthly_deposit = t_monthly_deposit;
        this->m_annual_interest = t_annual_interest;
        this->m_number_of_years = t_number_of_years;
    }

    /**
     * @brief Calculates the annual interest for an investment.
     *
     * This method calculates the annual interest for an investment based on the opening amount and the monthly deposit.
     * If the monthly deposit is less than 0.01, the interest is calculated using the opening amount and the annual
     * interest rate. If the monthly deposit is greater than or equal to 0.01, the interest is calculated by adding the
     * monthly deposit to the opening amount, calculating the monthly interest, and accumulating the interest over 12
     * months.
     *
     * @param t_opening_amount The opening amount of the investment.
     * @param t_monthly_deposit The monthly deposit amount.
     *
     * @return A tuple containing the ending balance and the earned interest for the year.
     */
    [[nodiscard]] std::tuple<long double, long double> calculateAnnualInterest(long double t_opening_amount,
        long double t_monthly_deposit) const;

    /**
     * @brief Prints the yearly report of the interest calculator.
     *
     * This method prints the yearly report of the interest calculator, including the year, year end balance, and year
     * end earned interest. The report is formatted and displayed on the console. The yearly report is generated for
     * each year of the investment period.
     *
     * @param t_title The title of the yearly report.
     * @param t_monthly_deposit The monthly deposit amount used in the calculation.
     */
    void printYearlyReport(const std::string& t_title, long double t_monthly_deposit) const;

public:
    /**
     * @brief Initialize the InterestCalculator instance.
     *
     * This method prompts the user for input to create a new instance of the InterestCalculator class.
     * It prompts for the initial investment amount, monthly deposit amount, annual interest rate, and number of years.
     *
     * @return A smart pointer to a new instance of the InterestCalculator class.
     */
    static std::unique_ptr<InterestCalculator> initialize();

    /**
     * @brief Prints the yearly reports of the interest calculator.
     *
     * This method prints the yearly reports of the interest calculator.
     */
    void printYearlyReports() const;
};

#endif // INTERESTCALCULATOR_H
