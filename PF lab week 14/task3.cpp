#include <iostream>
using namespace std;

string fireatcooridinates(string word);

char matrix[5][5] = {
    {'.', '.', '.', '*', '*'},
    {'.', '*', '.', '.', '.'},
    {'.', '*', '.', '.', '.'},
    {'.', '*', '.', '.', '.'},
    {'.', '.', '*', '*', '.'}};

int main()
{
    string action;
    string word;
    cout << "ENter input: ";
    cin >> word;

    cout << fireatcooridinates(word);
}

string fireatcooridinates(string word)
{
    char row = word[0];
    char col = word[1];
    int colindex = int(col) - '0';
    int rowindex;
    if (row == 'A')
    {
        rowindex = 0;
    }

    if (row == 'B')
    {
        rowindex = 1;
    }
    if (row == 'C')
    {
        rowindex = 2;
    }
    if (row == 'D')
    {
        rowindex = 3;
    }
    if (row == 'E')
    {
        rowindex = 4;
    }

    if (matrix[rowindex][colindex] == '.')
    {
        return "splash";
    }
    if (matrix[rowindex][colindex] == '*')
    {
        return "Boom";
    }
}