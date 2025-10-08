#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    cout<<s; // sort-ascii value ke oder mai sort krega jiski kam vo phle or space bhi character hota hai..
}