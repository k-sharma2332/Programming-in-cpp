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
    // wave print
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }    
    }

    //column print
    // for(int j=0;j<n;j++){
    //     for(int i=0;i<m;i++){
    //         cout<<arr[i][j]<<" ";
    //     }
    // }
}   