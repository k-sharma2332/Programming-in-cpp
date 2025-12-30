//Find the first non-repeating element in the array 
#include<iostream>
using namespace std;
int main(){
    int arr[7] = {1,1,5,2,3,4,4};
    bool flag = false;
    int n = 7;
    for(int i=0;i<n;i++){
        flag = false;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==false){
            cout<<"First non-repeating element is: "<<arr[i];
            break;
        }
    }
}