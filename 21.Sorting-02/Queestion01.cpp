// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of 
// two numbers formed from digits of the array. Please note that all digits of the given array must be 
// used to form the two numbers.
#include<iostream>
using namespace std;
int main(){
    int arr[10] = {0,2,3,5,3,1,7,6,9,8};
    int n=10;
    int num1=0;
    int num2=0;
    for(int i=0;i<n-1;i++){   
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
              int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
         if (i % 2 == 0)
            num1 = num1 * 10 + arr[i];
        else
            num2 = num2 * 10 + arr[i];
    }
    cout<<num1<<" "<<num2;
}