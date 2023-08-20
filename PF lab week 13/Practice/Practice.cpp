#include <iostream>
#include <fstream>
using namespace std;
string name[5];
void savenames();
void inputnames();

int main()
{
    inputnames();
    savenames();
}
void inputnames()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter your name " << endl;
        cin >> name[i];
    }
}
void savenames()
{
    fstream newfile;
    newfile.open("New File .txt", ios::out);
    for (int i = 0; i < 5; i++)
    {
        newfile << name[i] << endl;
    }
    newfile.close();
}
