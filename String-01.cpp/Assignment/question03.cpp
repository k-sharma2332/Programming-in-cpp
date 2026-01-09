// Check whether the given string is palindrome or not.
// Input : "abcde"
// Output : No
// Input : "abcdcba"
// Output : Yes
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    bool isPalindrome = true;
    int n = s.length();
    for(int i=0;i<n/2;i++){
        if(s[i] != s[n-i-1]){
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome){
        cout<<"Yes";
    } else {
        cout<<"No";
    }
}