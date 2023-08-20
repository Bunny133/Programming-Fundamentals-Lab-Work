#include <iostream>
using namespace std;
int main()
{
	int box;
	cout <<"Enter the number of boxes: ";
	cin >>box;
	box=box*3;
	int array[box];
	int add=0;
	int product=0;
	for (int i=0;i<box;i++)
	{
		cout <<"Enter number of elements in the array: ";
		cin >>array[i];
	}
	for (int j=0;j<box;j=j+3)
	{
		product=array[j]*array[j+1]*array[j+2];
		add=add+product;
	}
	cout<<product;
	
}
