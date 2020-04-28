#include "Checking.h"

/**
 * WriteCheck method takes two parameters
 * checknum - number of check
 * amount - amount for check
 * Method checks if there is enough funds and adds new check num to array and update balance
 */
void Checking::WriteCheck(int checknum, double amount)
{
    // Get balance
    double currentBalance = Getbalance();
    // Check if there is enough funds on account, if no print error message
    if (amount > currentBalance)
    {
        std::cout << "There is no enough amount to write check";
        return;
    }

    // Shift each check num for one position to right
    for(int i = 8; i > 0; i--)
    {
        last10checks[i + 1] = last10checks[i];
    }

    // Add new check num at the frot of the array
    last10checks[0] = checknum;

    // Update balance
    Setbalance(currentBalance - amount);
    // Update withdraws num
    numwithdraws++;
}

/**
 * No argument constructor, calls super constructor, and sets array to all 0's
 */
Checking::Checking() : Account()
{
    for (int i = 0; i < 10; i++)
    {
        last10checks[i] = 0;
    }
}

/**
 * Constructor with arguments, calls super constructor with arguments, and sets array to all 0's
 * 
 */
Checking::Checking(std::string name, long taxID, double balance) : Account(name, taxID, balance)
{
    for (int i = 0; i < 10; i++)
    {
        last10checks[i] = 0;
    }
}

/**
 * Display method, print account informations to standard output
 * Print all details for account
 * Then print information for Checking account
 */
void Checking::display()
{
    // Print header
    std::cout << "Checking account:" << std::endl;

    // Print info from super class
    Account::display();

    // Print check register
    std::cout << "Accounts check register:";
    int i = 0;

    // If last10checks is 0, then we get to the end
    while (last10checks[i] != 0 && i < 10)
    {
        std::cout << last10checks[i] << ", ";
        i++;
    }
    // Print deposits num
    std::cout << "Deposits: " + numdeposits << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}
