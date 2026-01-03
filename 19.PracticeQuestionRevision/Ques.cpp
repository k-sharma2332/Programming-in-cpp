//Write a program to print the elements of both the diagonals in a square matrix.
// Input 1:
// 1  2  3 
// 4  5  6
// 7  8  9
// 1     3
//    5
// 7     9
#include<iostream>
using namespace std;
int main(){
    int m; 
    cout<<"Enter rows of matrix: ";
    cin>>m;
    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j || (i+j)==m-1){
                cout<<arr[i][j]<<" ";
            }
            
            else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
}