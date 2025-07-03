//  Print the following pattern
//  Input: n = 4
//  Output:
//    *
//   **
//  ***
// ****
//  ***
//   **
//    *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        // hashes
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        // stars
        for(int k=1;k<=i;k++)
        cout <<"*";
        cout<<endl;
    }
    n-=1; // n = n-1;
    for(int i=1;i<=n;i++){
        // hashes
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        // stars
        for(int k=1;k<=n+1-i;k++)
        cout <<"*";
        cout<<endl;
    }
    

    
}