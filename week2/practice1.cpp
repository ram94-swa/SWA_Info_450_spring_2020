#include <iostream>
using namespace std;

int main() {

  int value, sqr;
  cout << "Enter a positive value to be squared or enter 0 to stop: ";
  cin >>value; // this inputs from the user
  
  while(value != 0){
  sqr =  (value * value); // convert to square
  cout << "Sqaure of entered value is: " << sqr;
  cout << " ";
  break;
  }

  if(value == 0) {
      cout << " Execution stopped. ";
  }
  
  
return 0; }
