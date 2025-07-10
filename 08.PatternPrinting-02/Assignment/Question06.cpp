//  Print the following pattern
//  Input : n = 5
//  Output:
// *                 *
//   *             *
//     *         *
//       *     *
//          *
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value: ";
    cin >> n;
    for (int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
        if(i==j)
        cout<<"*";
        else cout<<" ";
       }
       for(int j=1;j<=n-1;j++){
        if(i+j==n) cout<<"*";
        else cout<<" ";
       }
       cout<<endl;
    }
//     for (int i = 1; i <= n - 1; i++)
//     {
//         for (int j = 1; j <= n - 1; j++)
//         {
//             if (i == j)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << " ";
//         for (int j = 1; j <= n - 1; j++)
//         {
//             if (i + j == n)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i < n; i++)
//     {
//         cout << " ";
//     }
//     cout << "*";
 }
