#include "CreditCard.h"

/**
 * This method do charge for this account, it takes name and amount
 * Method checks if there is enough funds and if so, it update last10charges, balance and numwithdraws
 */
void CreditCard::DoCharge(std::string name, double amount)
{
    // Take current balance
    double currentBalance = Getbalance();

    // Check if there is enough money to do charge, if no print error message
    if (amount > currentBalance)
    {
        std::cout << "There is no enough amount to write check";
        return;
    }

    // Shift all charges to right
    for(int i = 8; i > 0; i--)
    {
        last10charges[i + 1] = last10charges[i];
    }

    // Insert new charge
    last10charges[0] = name;

    // Update balance
    Setbalance(currentBalance - amount);
    // Update withdraws num
    numwithdraws++;
}

/**
 * Make payment will take amount and add it to balance
 */
void CreditCard::MakePayment(double amount)
{
    // Take current balance
    double currentBalance = Getbalance();
    // Update current balance to new sum
    Setbalance(currentBalance + amount);
    // Update num deposits
    numdeposits++;
}

/**
 * Constructor with no arguments, calls super constructor and sets last10charges array to 0s
 */
CreditCard::CreditCard() : Account()
{
    for (int i = 0; i < 10; i++)
    {
        last10charges[i] = "";
    }
}

/**
 * Constructor with arguments, calls super constructor and sets last10charges array to 0s
 */
CreditCard::CreditCard(std::string name, long taxID, double balance) : Account(name, taxID, balance)
{
    for (int i = 0; i < 10; i++)
    {
        last10charges[i] = "";
    }
}

/**
 * Display method, print account informations to standard output
 * Print all details for account
 * Then print information for Credit Card account
 */
void CreditCard::display()
{
    // Print header
    std::cout << "Credit Card account:" << std::endl;
    // Print details for Account
    Account::display();
    // Print last 10 charges
    std::cout << "Account charges:";
    int i = 0;
    while (last10charges[i] != "" && i < 10)
    {
        std::cout << last10charges[i] << ", ";
        i++;
    }
    // Print deposits
    std::cout << "Deposits: " + numdeposits << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}