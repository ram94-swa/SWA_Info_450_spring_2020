#pragma once

#include "Account.h"

/**
 * This class represents Credit Card account
 */
class CreditCard: public Account
{
// Private fields
private:
    // Card number
    long cardnumber;
    // Array of last 10 charges
    std::string last10charges[10];

// Public methods
public:
    void DoCharge(std::string, double);
    void MakePayment(double amount);
    CreditCard();
    CreditCard(std::string, long, double);
    void display();
};