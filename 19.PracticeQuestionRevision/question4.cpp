//Check if the given array is sorted or not
#include<iostream>
using namespace std;    
int main(){
    int arr[5] = {1,2,5,6,8};
    bool isSorted = true;
    for(int i=0;i<4;i++){
        if(arr[i]>arr[i+1]){
            isSorted = false;
            break;
        }
    }
    if(isSorted){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
}