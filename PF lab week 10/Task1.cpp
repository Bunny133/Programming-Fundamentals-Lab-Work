#include <iostream>
using namespace std;

int main()
{
	int size;
	cout <<"Enter number  of weeks: ";
	cin >>size;
	int progress[size];
	for (int i=0;i<size;i++)
	{
		cout <<"Enter number of saturdays he ran: ";
		cin >>progress[i];
	}
	int count=0;
	for (int i=0;i<size;i++)
	{ 
	 
		if (progress[i] < progress[i+1])
		{
			if (i == size-1)
			{
				break;
			}
			count++;
			
		}
		
	}
	cout <<count;
	
	
}
