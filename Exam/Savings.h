#pragma once

#include "Account.h"

/**
 * This class represents Savings account
 */
class Savings: public Account
{
// Public methods
public:
    void DoWithdraw(double);
    Savings();
    Savings(std::string, long, double);
    void display();
};