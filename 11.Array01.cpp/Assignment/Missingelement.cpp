// WAP to find the smallest missing positive element in the sorted Array that contains only  positive elements
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {0,2,3,4,5};
    int n = 5;
    int missing = -1;
    for(int i=0;i<n;i++){
        if(arr[i] != i){
            missing = i;
            break;
        }
    }

    cout<<"Smallest missing positive element is: "<<missing<<endl;

    
}