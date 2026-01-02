#include<iostream>
using namespace std;
int main(){
    int m; 
    cout<<"Enter the number of rows: ";
    cin>>m;
    int n;
    cout<<"Enter the number of columns: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // storing transpose
   int t[n][m];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        t[i][j]=arr[j][i];
    }
   }
   // printing transpose
    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
          cout<<t[i][j]<<" ";
     }
     cout<<endl;
    }
}
