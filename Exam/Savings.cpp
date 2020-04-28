#include "Savings.h"

/**
 * This method takes acmount and subtract it from balance
 */
void Savings::DoWithdraw(double amount)
{
    // Take current balance
    double currentBalance = Getbalance();

    // Check if there is enough money to withdraw, if no print error message
    if (amount > currentBalance)
    {
        std::cout << "There is no enough amount to write check";
        return;
    }
    // Update balance
    Setbalance(currentBalance - amount);
    // Update numwithdraws
    numwithdraws++;
}

/**
 * No argument constructor, calls super constructor
 */
Savings::Savings() : Account()
{

}

/**
 * Constructor with arguments, calls super constructor with arguments
 */
Savings::Savings(std::string name, long taxID, double balance) : Account(name, taxID, balance)
{

}

/**
 * Display method, print account informations to standard output
 * Print all details for account
 * Then print information for Savings account
 */
void Savings::display()
{
    // Print header
    std::cout << "Savings account:" << std::endl;
    // Print details for account
    Account::display();
    // Prit number of deposits and number of withdraws
    std::cout << "Number of deposits: " << numdeposits << ", Number of withdraws: " << numwithdraws << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}