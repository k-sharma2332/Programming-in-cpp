//  Print the following pattern
//  Input: n = 4
//  Output:
//  1 2 3 4 3 2 1
//  1 2 3   3 2 1
//  1 2       2 1
//  1           1
                    
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
    cout<<i;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
          int a = 1;
        for(int j=1;j<=m+1-i;j++){
            cout<<a;
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
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}