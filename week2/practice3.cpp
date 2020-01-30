#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a year to see if it's a leap year or not: ";
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << "  is leap year.";
            else
                cout << year << " isn't a leap year.";
        }
        else
            cout << year << " is leap year.";
    }
    else
        cout << year << " isn't a leap year.";
    return 0;
}
