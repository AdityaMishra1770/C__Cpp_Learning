#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int ar[10][10], row, column;
    cout << "Enter row & column : ";
    cin >> row >> column;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            cin >> ar[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
    int target;
    cout << "Enter the element to search:" << endl;
    cin >> target;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (ar[i][j] == target)
            {
                cout << "found the target = " << target << " at " << (i)*column + j << endl;
            }
        }
    }
    return 0;
}