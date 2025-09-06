#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no. of row: ";
    cin>>m;
    int n;
    cout<<"Enter no. of column: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements of array: ";
    cout<<endl;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }   
    // for print the array
    for(int i=0;i<m;i++){  //rows
        for(int j=0;j<n;j++){  // column
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    // store the transpose
    int t[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j] = arr[j][i];
        }
    }
    // print the transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}