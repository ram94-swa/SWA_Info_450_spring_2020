#include <iostream>
#include <string.h>
using namespace std;

//function 
string reverse(string str)
{
//find length of the string passed
int j = str.length();
char temp;
// Exchange character starting from beginning to the one with the end 
for (int i = 0; i < j/2; i++) {
//use temporary variable to swap
temp = str[i];
str[i]=str[j-1-i];
str[j-1-i] = temp;

}
//string will be returned back from the function   

return str;
}
  
// Driver program
int main()
{
string str,strRvr;
do{
//take the string input
cout<<"\nEnter a string to be reversed: ";
getline(cin,str);
//call the reverse function
strRvr = reverse(str);
cout << strRvr;
}while(str.size()!=0);
//check in the while statement if the string size is zero, if zero it is blank line
return 0;
}