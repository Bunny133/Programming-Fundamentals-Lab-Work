#include <iostream>
using namespace std;
bool check(int pre,int curr,int next);
int main()
{
	int size;
	cout <<"Enter size of the array: ";
	cin >>size;
	int array[size];
	for (int i=0;i<size;i++)
	{
		cout <<"Enter elements of the array: ";
		cin >>array[i];
	}
	int count=0;
	int finalarray[10];
	for (int i=1;i<size-1;i++)
	{
	   bool flag=check(array[i-1],array[i],array[i+1]);
	   {
	   	if (flag ==true)
	   	{
	   		finalarray[count]=array[i];
		}
		else 
		 cout <<"False:";
	   }
	}
	if (count==0)
	{
		cout <<"No peak found: ";
	}
	else
	{
		for (int idx=0;idx<count;idx++)
		{
			cout <<finalarray[idx];
		}
	}
	
	
}
bool check(int pre,int curr,int next)
{
	bool flag=false;
	if(curr>pre && curr>next)
	{
		return flag;
	}
}
