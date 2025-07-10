//star sqaure diaond cut out
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. ";
    cin >> n;
    int m = n - 1; // new no. of lines
    
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << "*";
    }
    cout << endl;
     int nsp = 1;
    for (int i = 1; i <= m-1; i++)
    {
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
        }
        nsp += 2;
        // stars
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
     nsp = 2 * m - 1;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
        }
        nsp -= 2;
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}