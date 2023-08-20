#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 int number1;
 int number2;
 int greater;
 int minimun;
 int power;
 float squareroot;
 float cuberoot;
 cout <<"Enter first number: ";
 cin >>number1;
 cout <<"Enter second number: ";
 cin >>number2;
 
 greater=max(number1,number2);
 cout <<"The greater number is: "<<greater;

 minimum = min(number1,number2);
 cout <<"The minimum nmber is : "<<minimum;
 power = pow(number1,number2);
 cout <<"Power is : "<<power; 

 squareroot = sqrt(number1,number2);
 cout <<"Square root is : "<<squareroot; 

 cuberoot = cbrt(number1,number2);
 cout <<"Cube root is : "<<cuberoot; 

 greater = ceil(

}