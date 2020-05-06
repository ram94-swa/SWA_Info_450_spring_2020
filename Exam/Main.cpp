#include "Account.h"
#include "Checking.h"
#include "CreditCard.h"
#include "Savings.h"

/**
 * This method prints menu to user
 */
void printMenu()
{
    std::cout << "1. Savings Deposit" << std::endl;
    std::cout << "2. Credit Card Deposit" << std::endl;
    std::cout << "3. Checking Deposit" << std::endl;
    std::cout << "4. Write A Check" << std::endl;
    std::cout << "5. Credit Card Payment" << std::endl;
    std::cout << "6. Make a charge" << std::endl;
    std::cout << "7. Display Savings" << std::endl;
    std::cout << "8. Display Checking" << std::endl;
    std::cout << "9. Display Credit Card" << std::endl;
    std::cout << "0. Exit" << std::endl;
}

/**
 * Main method
 */
int main()
{
    // Create a Savings account
    Savings s("Saving", 1l, 100.0);
    // Create a Checking account
    Checking c("Checking", 2l, 100.0);

    // Create Credit Card account
    CreditCard cc("Credit Card", 3l, 100.0);

    // Take pointers so we can express polymorphism
    Account* saving = &s;
    Account* checking = &c;
    Account* creditCard = &cc;

    // Print all accounts to standard output
    saving->display();
    checking->display();
    creditCard->display();

    // Variable for loop
    int exit = 1;
    // Input number
    int input;
    // Input amount
    double amount;
    // Input name
    std::string name;

    // While exit is different than 0
    while (exit)
    {
        // Print menu
        printMenu();
        // Ask for choice
        std::cout << "Input your choice: ";
        std::cin >> input;

        // Switch on input
        switch (input)
        {
        case 1:
            // Ask user to input amount
            std::cout << "Input amount to deposit: ";
            std::cin >> amount;
            // Call make deposit
            saving->MakeDeposit(amount);
            break;
        case 2:
            // Ask user to input amount
            std::cout << "Input amount to deposit: ";
            std::cin >> amount;
            // Call make deposit
            creditCard->MakeDeposit(amount);
            break;
        case 3:
            // Ask user to input amount
            std::cout << "Input amount to deposit: ";
            std::cin >> amount;
            // Call make deposit
            checking->MakeDeposit(amount);
            break;
        case 4:
            // Ask user to input check num and amount
            int checknum;
            std::cout << "Input check num: ";
            std::cin >> checknum;
            std::cout << "Input amount: ";
            std::cin >> amount;
            // Call write check
            c.WriteCheck(checknum, amount);
            break;
        case 5:
            // Ask user to input amount
            std::cout << "Input amount to deposit: ";
            std::cin >> amount;
            // Call make payment
            cc.MakePayment(amount);
            break;
        case 6:
            // Ask user to input name and amount
            std::cout << "Input name: ";
            std::cin >> name;
            std::cout << "Input amount: ";
            std::cin >> amount;
            // Call do charge
            cc.DoCharge(name, amount);
            break;
        case 7:
            // Display saving account
            saving->display();
            break;
        case 8:
            // Display checking account
            checking->display();
            break;
        case 9:
            // Display credit card account
            creditCard->display();
            break;
        case 0:
            // Set exit to 0 so it will stop the loop
            exit = 0;
            break;
        default:
            // Unknown option
            std::cout << "Unknown option" << std::endl;
            break;
        }            
    }
}
