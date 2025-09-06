//  Input a string of even length and reverse the second half of the string.
//  Input : str = "abcdefgh"
//  Output : abcdhgfe
//  Input :str = "pwians"
//  Output : pwisna
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.size()%2!=0) cout<<"Invalid input"<<endl;
    else{
        reverse(s.begin()+n/2,s.end());
    cout<<s;
    }
}