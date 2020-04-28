#include "Account.h"

/**
 * SetName method takes one argument and changes name for account
 */
void Account::SetName(std::string name)
{
    this->name = name;
}

/**
 * SetTaxID method takes one argument and changes taxID for account
 */
void Account::SetTaxID(long taxID)
{
    this->taxID = taxID;
}

/**
 * Setbalance method takes one argument and changes balance for account
 */
void Account::Setbalance(double balance) 
{
    this->balance = balance;
}

/**
 * GetName returns name for account
 */
std::string Account::GetName()
{
    return name;
}

/**
 * GetTaxID returns name for account
 */
long Account::GetTaxID()
{
    return taxID;
}

/**
 * GetTaxID returns name for account
 */
double Account::Getbalance() 
{
    return balance;
}

/**
 * MakeDeposit takes one argument, amount, and add that amount to balance
 */
void Account::MakeDeposit(double amount)
{
    balance += amount;
    numdeposits++;
}

/**
 * No arguments constructor, just set numdeposits and numwithdraws to 0
 */
Account::Account() 
{
    numdeposits = 0;
    numwithdraws = 0;
}

/**
 * Constructor with arguments, set numdeposits and numwithdraws to 0
 * and set name, taxID and balance
 */
Account::Account(std::string name, long taxID, double balance) : name(name), taxID(taxID), balance(balance) 
{
    numdeposits = 0;
    numwithdraws = 0;
}

/**
 * Display method prints name, taxID and balance to console
 */
void Account::display()
{
    std::cout << "Name: " << name << ", taxID: " << taxID << ", Balance: $" << balance << std::endl;
}