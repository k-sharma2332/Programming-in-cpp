// Input a string of length n and count all the consonants in the given string.
// Input : "pwians"
// Output : 4
// Input : "abdc"
// Output : 3
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    int count = 0;
    for(int i=0;s[i]!=0;i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U'){
            count++;

        }
    }
    cout<<count;
}