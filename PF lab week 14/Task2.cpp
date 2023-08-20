#include <iostream>
using namespace std;

// int matrix[3][3] = {
//     {1, 0, 0},
//     {0, 1, 0},
//     {0, 0, 1}};

int main()
{
    int size,row,col;
    cout <<"Enter size of the 2d array: ";
    cin >> size;
  cout <<"ENetr size of the 2d array: ";
  cout <<"ENetr size of the 2d array: ";
  cin >>row;
  cin >>col;
   int array[row][col];

  for(int i =0; i<size;i++)
  {
    for(int j =0; j<size;j++)
    {
        cout <<"Enter elements of the array: ";
        cin >> array[i][j];
    }
    // cout <<endl;
  }
  for(int i =0; i<size;i++)
  {
    for(int j =0; j<size;j++)
    {
       cout <<array[i][j]<<"\t";
    }

    cout <<endl;
  }


    // int matrix[3][3] = {
    //     {1, 0, 0},
    //     {0, 1, 0},
    //     {0, 0, 1}};

    // if (matrix[0][0] == 1 && matrix[1][1] == 1 && matrix[2][2] == 1)
    // {
    //     cout << "The given table is Matrix:" << endl;
    // }

    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {
    //         cout << array[row][col] << "\t";
    //     }
    //     cout << endl;
    // }
}

//     bool flag;
//     if (flag = true)
//     {
//         cout << "The given matrix is identity:";
//     }
// }

// bool checkidentity()
// {
//     bool flag = true;

//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 3; col++)
//         {
//             if (row == col && array[row][col] != 1)
//             {
//                 flag == false;
//                 break;
//             }
//             else if (row != col && array[row][col] != 0)
//             {
//                 flag == false;
//                 break;
//             }
//         }
//     }
// }