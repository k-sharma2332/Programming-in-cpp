#include<iostream>
using namespace std;
int main(){
    int m; 
    cout<<"Enter the number of rows: ";
    cin>>m;
    
    int arr[m][m];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0 ;i<m;i++){
     for(int j=i+1;j<m;j++){
        // swaping of i,j and j,i
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
     }
     cout<<endl;
    }
    

   
   // printing transpose
    for(int i=0;i<m;i++){
     for(int j=0;j<m;j++){
          cout<<arr[i][j]<<" ";
     }
     cout<<endl;
    }
}
