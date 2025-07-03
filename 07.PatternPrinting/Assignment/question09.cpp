// Print the following pattern
//  Input : n = 4
//  Output :
//  
//       A 
//     A B
//   A B C
// A B C D
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
        cout <<char(k+64);
        cout<<endl;
    }
}