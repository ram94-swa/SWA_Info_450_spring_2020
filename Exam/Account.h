#pragma once

#include <iostream>
#include <string>

/**
 * Account class
 */
class Account {
// private fields
private:
    std::string name;
    long taxID;
    double balance;
// protected fields, this we can use in subclasses
protected:
    int numdeposits;
    int numwithdraws;
// public methods
public:
    void SetName(std::string);
    void SetTaxID(long);
    void Setbalance(double);
    std::string GetName();
    long GetTaxID();
    double Getbalance();
    void MakeDeposit(double);
    Account();
    Account(std::string, long, double);
    virtual void display();
};