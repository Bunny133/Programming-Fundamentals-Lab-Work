#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int count = 0;
    string line;
    fstream file;
    file.open("Practice.txt", ios::in);
    while (!file.eof())
    {
        getline(file, line);
        count++;
    }
    file.close();
    cout << "There are " << count;
}