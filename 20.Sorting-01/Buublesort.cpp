#include<iostream>
using namespace std;
int main(){
    int n=6;
    int arr[6] = {5,4,6,3,8,2};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 
    for(int i=0;i<n-1;i++){ // n-1 passes
        //traverse
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}