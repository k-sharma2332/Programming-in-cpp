#include<iostream>
using namespace std;
int main(){
    int x = 4;
    int* ptr =  &x;
    cout<<*ptr<<endl;
    //ptr++;
    (*ptr)++;
    cout<<*ptr<<endl;
}
