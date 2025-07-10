// Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the value: ";
    cin>>x>>y;
    int* p1 = &x;
    int* p2 = &y;
    int product;
    int *productAns = &product;
    *productAns = (*p1)*(*p2);
    cout<<*productAns<<endl;
}