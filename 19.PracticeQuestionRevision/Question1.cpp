//Count the number of elements strictly greater than x
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,5,3,4};
    int x=2;
    int count=0;
    for(int i=0;i<5;i++){
        if(arr[i]>x)
            count++;
    }
    cout<<count;
}