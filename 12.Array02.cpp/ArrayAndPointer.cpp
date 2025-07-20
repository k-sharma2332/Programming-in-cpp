#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,4,43,4};
     int* ptr = arr; //giving address
    // cout<<ptr<<endl;
    // cout<<ptr[2];
    for(int i=0;i<=3;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;  // ptr is pointing to the first element
    *ptr = 8;  //ptr[0]=8
    ptr++;      // ptr is pointing to second element
    *ptr=9;     
    ptr--;     //ptr is pointing to first element
    cout<<endl;
    for(int i=0;i<=3;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;     // ptr is pointing to first element


}