#include<iostream>
#include<string>
using namespace std;
int main(){
   string s;
   cout<<"enter the string"<<endl;
    getline(cin,s);
    int n = s.length();
    cout<<s.substr(n/2); //substring from n/2 to end
    cout<<endl;
}