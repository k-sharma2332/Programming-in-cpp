#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string str = "khushi";
    // cout<<str.size();
    // cout<<endl;
    // cout<<str.length();
    // string str = "abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('i');
    // str.push_back('u');
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str;
    // string str="abc";
    // cout<<str<<endl;
    // str = str+"def"; //add
    // cout<<str;
    string str = "khuhsi";
    cout<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<str;
}