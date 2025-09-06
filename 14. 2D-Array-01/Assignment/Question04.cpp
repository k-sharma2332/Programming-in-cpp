//  Q4: Write a C++ program to find the largest element of a given 2D array of integers.
//  Input 1:
//  1 3 4 6
//  2 4 5 7
//  3 5 6 8
//  4 6 7 9
//  Output 1: 9
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row: ";
    cin>>m;
    int n;
    cout<<"Enter the column: ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int max = arr[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
         if(max<arr[i][j]) max=arr[i][j];
        }
    }
    cout<<"The maximum element: "<<max;


}