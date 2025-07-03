//      ****
//     ****
//    ****
//   ****
// input n=4
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){ // space
            cout<<" ";
        }
        for(int j=1;j<=n;j++){ //star
            cout<<"*";
        }
        cout<<endl;
    }
}