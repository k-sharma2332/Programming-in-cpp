//  Print the following pattern
// Input: n = 4
//  Output:
//  A B C D E F G
//  A B C   E F G
//  A B       F G
//  A           G                     
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. ";
    cin>>n;
    int m = n-1; //new no. of lines
    int nsp=1;
    // 2n-1 stars
    for(int i=1;i<=2*n-1;i++){
    cout<<char(i+64);
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
          int a = 1;
        for(int j=1;j<=m+1-i;j++){
            cout<<char(a+64);
            a++;
        }
        // spaces
        for(int k=1;k<=nsp;k++){
            cout<<" ";
            a++;
        }
        nsp+=2;
        // stars
        for(int j=1;j<=m+1-i;j++){
            cout<<char(a+64);
            a++;
        }
        cout<<endl;
    }
}