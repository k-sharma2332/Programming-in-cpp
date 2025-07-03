// Print the table of ‘n’. Here ‘n’ is an integer which the user will input.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    // for(int i=n;i<=n*10;i=i+n){
    //     cout<<i<<endl;
    // }
    for(int i=1;i<=100;i++){
        cout<<n*i<<endl;
    }
}