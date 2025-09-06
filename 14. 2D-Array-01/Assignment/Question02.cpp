// Write a program to add two matrices and save the result in one of the given matrices.
//  Input 1:
//  1 2 3
//  4 5 6
//  7 8 9
//  4 5 8
//  0 0 8
//  1 2 0
//  Output 1:
//  5 7 11
//  4 5 14
//  8 10 9

#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter the column/row: ";
    cin >> m;
    int a[m][m];
    int b[m][m];
    cout << "Enter the element of the row: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Enter the element of column: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}