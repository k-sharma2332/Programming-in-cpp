#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        // first "i" odd number
        for(int j=1;j<=2*i-1;j+=2){
            cout<<j;
        }
        cout<<endl; 
    }
}