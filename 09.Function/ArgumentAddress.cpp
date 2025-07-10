#include<iostream>
using namespace std;

int fun(int x,int y){
    cout<<"Address of fun x: "<<&x<<endl;
    cout<<"Address of fun y: "<<&y<<endl;
}

int main(){
    int x=4;
    int y=8;
    cout<<"address of main x: "<<&x<<endl;
    cout<<"address of main y: "<<&y<<endl;
    fun(x,y);
}