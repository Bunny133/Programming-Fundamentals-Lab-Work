#include <iostream>
using namespace std;
int main()
{
	int size;
	cout <<"Enter size of the array: ";
	cin >>size;
	int array[size];
	int newarray[size];
	int count=0;
	
	for (int i=0;i<size;i++)
	{
		cout <<"ENter elements of the array :";
		cin >>array[i];
	}
	for (int i=1;i<size-1;i++)
	{
		
		if (array[i] > array[i+1] && array[i]> array[i-1])
		{
			newarray[count]=array[i];
			count++;
		}
	}
	
	for (int i=0;i<count;i++)
	{
		cout <<newarray[i];
	}
}
