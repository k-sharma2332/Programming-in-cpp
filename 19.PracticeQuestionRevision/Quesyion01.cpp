// Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pro = 1;
    for(int i=0;i<n;i++){
        pro = pro * arr[i];
    }
    cout<<pro;
}