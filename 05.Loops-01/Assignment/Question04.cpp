// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int a = 4;
    for(int i=4;i<=n;i++){
        cout<<a<<endl;
        a = a+3;
    }
 
}