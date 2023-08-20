#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;
    fstream file;
    file.open("newFile.txt", ios::in);
    
    
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    
    // else
    // {
    //     cout << "Unable to open file" << endl;
    // }
    return 0;
}





