#include <iostream>
using namespace std;
float division(int number1,float number2);
int maximum(int number1,int number2);
int sum(int number1,int number2);
int main()
{
 int number1;
 float number2;
 int divide;
 int greater;
 int add;
 cout <<"Enter first number: ";
 cin >>number1;
  cout <<"Enter second number: ";
 cin >>number2;
 add = sum(number1,number2);
 cout <<"The sum of the given two numbers are: "<<add <<endl;
 divide = division(number1,number2);
 cout <<"The division of the given two numbesrs is: "<<divide <<endl;
 greater = maximum(number1,number2);
 cout <<"The greater number is: "<<greater;
}
 float division(int number1,float number2)
{
float division;
division=number1/number2;
return division;
}
int maximum(int number1,int number2)
{
 if (number1 > number2)
  {
   return number1;
  }
  if (number1 < number2)
  {
   return number2;
  }
 return 0;
}
int sum(int number1,int number2)
{
 int sum=number1+number2;
 return sum;

}