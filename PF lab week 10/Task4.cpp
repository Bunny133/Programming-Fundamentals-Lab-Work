#include <iostream>
using namespace std;
int length;
int array[100];
int main()
{
	int cycle;
	bool repeating = true;
	cout <<"Enter szie of the array: ";
	cin >>length;
	
	array[length];
	for (int i =0;i<length;i++)
	{
      	cout <<"Enter elements of the array: ";
		cin >>array[i];
	}
	cout <<"Enter the cycle: ";
	cin >>cycle;
	if (length < cycle)
	{
		cout <<"True";
	}
	for (int i=0;i<length;i++)
	{
		if (i == length-3)
		{
			if (array[i] !=array[i+cycle])
			{
				repeating=false;
				break;
			
			}
		}
	}
	cout <<repeating;
}
