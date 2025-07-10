#include<iostream>
using namespace std;
int main(){
    int a = 15;
    int* ptr = &a;
    int b = (*ptr)++;
    cout<<a<<" "<<b<<endl;
    int c = ++(*ptr);
    cout<<a<<" "<<c;
}