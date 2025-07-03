// Print the GP 1,2,4,6,8....upto n terms.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int a = 1;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a = a*2;
    }
}