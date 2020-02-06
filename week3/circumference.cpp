#include <iostream>
using namespace std;


double getCircumference(double radius);

const float PI = 3.14159265358979323846;
double cir;      // cir = cicumference
double radius;      // rad = radius

int main() {

  cout<<"Enter radius of circle : ";
  cin>>radius;
  cir = getCircumference(radius);
  cout << cir << "is the circumference of circle";
  return 0; 
  }


double getCircumference(double radius){

  cir = 2 * PI * radius;  //Circumference Formula
  return (cir);
}


