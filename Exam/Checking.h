#pragma once

#include "Account.h"

/**
 * This class represents Checking account
 */
class Checking: public Account
{
private:
    // Array that takes numbers for last 10 checks
    int last10checks[10];

// Public methods
public:
    void WriteCheck(int, double);
    Checking();
    Checking(std::string, long, double);
    void display();
};