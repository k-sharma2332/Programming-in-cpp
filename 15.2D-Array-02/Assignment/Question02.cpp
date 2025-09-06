#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of column: ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the elements of array: ";
    cout<<endl;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }   
    // for print the array
    for(int i=0;i<n;i++){  
        for(int j=0;j<n;j++){  
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        cout<<endl;
    }

   // print the transpose
    cout<<"The Transpose matrix is "<<endl;
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int k=0;k<n;k++){
        int i=0;
        int j=n-1;
        while(i<j){
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;

        }
    }

    
    cout<<"The Transpose matrix is "<<endl;
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}