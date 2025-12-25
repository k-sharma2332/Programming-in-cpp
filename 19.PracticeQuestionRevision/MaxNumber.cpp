#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=0;i<n;i++){
    if(max<arr[i])
    // cout<<arr[i]<<endl;
    max = arr[i];
        }
        cout<<max<<endl;
    
}