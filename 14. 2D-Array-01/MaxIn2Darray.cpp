#include<iostream>
#include<climits>
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
        cout<<endl;
    }   
    // For printing max element..
    int max = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    cout<<"Maximum element is: "<<max;
}