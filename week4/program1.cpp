#include<iostream>
#include <cmath>
using namespace std;
int main()
{
//declare variables
int num[10],sum=0;
double mean,std_deviation;
  
//take 10 integer input in a loop
for(int y=0;y<=9;y++)
{
cout<<"Enter the number for index "<<y<<":";
cin>>num[y];
sum = sum+num[y]; //calculate sum 
}
  
mean = sum/10;//calculate average
  
for(int y = 0; y < 10; ++y)//calculate the standard deviation
std_deviation += pow(num[y] - mean, 2);

cout<<"Results,"<<mean<<","<<sqrt(std_deviation/10) <<endl;//print results 
return 0;
}