#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream bunny;
    string line;
    bunny.open("New File.txt", ios::in);
    bunny >> line;
    bunny.close();
}