// Input a string of even length and reverse the second half of the string.
// Input : str = "abcdefgh"
// Output : abcdhgfe
// Input :str = "pwians"
// Output : pwisna
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s = "khushi";
    int n = s.length();
   reverse(s.begin()+n/2, s.end());
   cout<<s;
}