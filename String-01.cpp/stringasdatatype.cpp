#include<iostream>
#include<string>
using namespace std;
int main() {
//    string str1 = "Hello World";
//    cout<<str1[0];
string s;
// cin>>s;
// cout<<s; //but if we give input with space then it will take only first word because cin stops at space so we use getline
getline(cin,s);
cout<<s;

}
