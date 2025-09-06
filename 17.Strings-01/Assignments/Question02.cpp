//  Input a string of length n and count all the consonants in the given string.
//  Input : "pwians"
//  Output : 4
//  Input : "abdc"
//  Output : 3
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    int n=s.length();
   
    int count = 0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
    cout<<n-count;
}