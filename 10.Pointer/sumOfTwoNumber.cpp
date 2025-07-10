#include<iostream>
using namespace std;
int main(){
    int x,y;
    int* p1=&x;
    int* p2=&y;
    cout<<"Enter the value: "<<endl;
    cin>>*p1;
    cout<<"Enter the value: "<<endl;
    cin>>*p2;
    cout<<"The sum is: "<<*p1 + *p2;
}