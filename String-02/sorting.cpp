#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    cout<<s;
    // they are sorted in the ascii order value or space comes first then uppercase letters and then lowercase letters and lexographic order
    
}