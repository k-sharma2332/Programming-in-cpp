#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "khushi";
    int n= s.length();
    reverse(s.begin()+1,s.begin()+4);
    cout<<s;
}