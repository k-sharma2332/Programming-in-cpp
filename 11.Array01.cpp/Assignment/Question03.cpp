// Find the minimum value out of all elements in the array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Please enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Please enter the element for array: ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int mini = arr[0];
    for(int i=1;i<=n-1;i++){
        if(arr[i]<mini) mini=arr[i];
    }
    cout<<"Minimum value from the given array: "<<mini;
}