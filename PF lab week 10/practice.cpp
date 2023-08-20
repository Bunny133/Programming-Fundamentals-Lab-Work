#include <iostream>
using namespace std;

int count=0;
int main()
{
    cout <<"Enter the size of the array: ";
     cin >>size;
    int array[size];
    for (int i=0; i<size; i++)
    {
      cout <<"Enter elements of the array: ";
      cin >>array[i];

      if (array[i+1] > array[i] || array[i+1] > array[i+2])
      {
        cout <<"Numbers are: "<<array[i+1];
        
      }
    }

    


}




