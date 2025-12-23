//Write a program to find the product of two numbers using pointers
#include<iostream>
using namespace std;
int main(){
    int a ,b;
    cin>>a>>b;
    int *p1 =&a;
    int *p2 = &b;
    int product = (*p1)*(*p2);
    cout<<product;
    return 0;
}