#include <iostream>
using namespace std;
int sum(int number1,int number2);
int main()
{
 int number1;
 int number2;
 int addition;
 cout <<"Enter first number: ";
 cin >>number1;
  cout <<"Enter second number: ";
 cin >>number2;
 addition = sum(number1,number2);
 cout <<"The sum of the given two numbesrs is: "<<addition;
}
 int sum(int number1,int number2)
{
int sum;
sum=number1+number2;
return sum;


}