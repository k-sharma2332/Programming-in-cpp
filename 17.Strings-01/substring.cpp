#include<iostream>
#include<string>
using namespace std;
int main(){
    // string s = "khushi";
    // cout<<s.substr(1,3);
    string s;
    cout<<"enter string: ";
    cin>>s;
    // abcdefg -  n=8
    int n = s.length();
    cout<<s.substr(n/2);
}