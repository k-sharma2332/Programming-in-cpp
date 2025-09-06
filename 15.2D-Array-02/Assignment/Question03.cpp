//  Write a program to print the matrix in wave form.
//  Input :
//  1 2 3
//  4 5 6
//  7 8 9
//  Output : 7 4 1 2 5 8 9 6 3
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of matrix: ";
    cin>>m;
    int n;
    cout<<"Enter column of matrix: ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
  
   for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    // column print
    for(int j=0;j<n;j++){
        for(int i=m-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
        }
    }
}   