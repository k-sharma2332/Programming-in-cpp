//  Print the following pattern
//  Input: n = 4
//  Output:
//        A
//      B A B
//    C B A B C
//  D C B A B C D
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;
        for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for(int j=i;j>=1;j--){
            cout<<char(j+64); /// np.triangle dec
        }
        for(int j=2;j<=i;j++){
            cout<<char(j+64);  // no. triangle start with 2
        }
        
        cout << endl;
    }

        
    

}