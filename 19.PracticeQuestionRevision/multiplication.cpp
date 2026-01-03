#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of first matrix: ";
    cin>>m;
    int n;
    cout<<"Enter column of first matrix: ";
    cin>>n;

    int p;
    cout<<"Enter rows of second matrix: ";
    cin>>p;
    int q;
    cout<<"Enter column of second matrix: ";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"Enter elements of first matrix: ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"Enter elements of second matrix: ";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        // resultent matrix
        int res[m][q];
        // multiplication
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                // res[i][j] = a[i][0]*b[0][j]+a[i][1]*b[1][j]+..
                res[i][j] = 0;
                for(int k=0;k<p;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        cout<<endl;
        // print res
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"The matrices can not be multiply.";
    }
  }