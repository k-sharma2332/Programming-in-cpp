// print the ap 1,3,5,7,9....
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    // for(int i=1;i<=2*n-1;i+=2){
    //     cout<<i<<endl;
    // } first mathematical method
    int a = 1;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a = a+2;
    }
    //using separate method
}