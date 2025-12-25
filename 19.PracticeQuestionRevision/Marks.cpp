#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int marks[n];
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    for(int i=0;i<n;i++){
        if(marks[i]<32){
            cout<<i;
        }
    }
}