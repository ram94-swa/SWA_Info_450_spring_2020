#include <iostream>
using namespace std;
int main()
{
  int x, i;
  bool Pnumber = true;
  cout << "Enter a positive integer: ";
  cin >> x;
  for(i = 2; i <= x / 2; ++i)
  {
      if(x % i == 0)
      {
          Pnumber = false;
          break;
      }
  }
  if (Pnumber)
      cout << "This is prime number";
  else
      cout << "This is not a prime number";
  return 0;
}