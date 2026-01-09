#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "khushi sharma";
    cout<<s.size()<<endl; //buts its not count the null character
    cout<<s.length()<<endl; //both are same
    cout<<s<<endl;
    s.push_back('e');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    string k = "yoo";
    s = s + k; //concatenation // also s+'k' we can use character also
    cout<<s<<endl;
    reverse(s.begin()+2,s.end()-1);
    cout<<s<<endl;

}