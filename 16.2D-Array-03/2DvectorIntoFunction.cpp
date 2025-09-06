#include<iostream>
#include<vector>
using namespace std;
void change2darray(int arr[3][3]){      // arr[][]->if we dont give size so its gives you errro!!
    arr[0][0] = 10;
}
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6,},{7,8,9,}};
    cout<<arr[0][0]<<endl;
    change2darray(arr);
    cout<<arr[0][0];
}