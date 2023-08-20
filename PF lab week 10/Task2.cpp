#include <iostream>
using namespace std;
int checkfrequency(int size,char letter,string array[]);
int main()
{
	int size;
	cout <<"Enter how many words you want to Enter:";
	cin >>size;
	string array[size];
	int count=0;
	for (int i=0; i<size;i++)
    {
	 cout <<"Enter"<<i <<"Words: ";
    	cin >>array[i];
    
	}
	char letter;
	cout <<"Enter a letter you want to check in the array: ";
	cin >>letter;
	int frequency = checkfrequency(size,letter,array);
	cout <<"The frequency of the "<<letter<<" is: "<<frequency;
	

}

int checkfrequency(int size,char letter,string array[])
{
	int count=0;
	for(int i=0; i<size;i++)
	{
	
     	string temp=array[i];
	
	    int idx=0;
		while(temp[idx]!='\0')
		{
			if (temp[idx]==letter)
			{
			   count ++;
			}
			idx++;
			
		}
	  
    
}
return count;
}


	
	

