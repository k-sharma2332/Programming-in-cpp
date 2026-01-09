#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "abjkoe";
    int count=0;
    int n=s.length();
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
         s.substr(n);
            count++;
        }
    }
    cout<<count;
}