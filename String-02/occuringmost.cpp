#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s="physicswallah";
    
    vector<int> arr(26,0);
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii - 97]++;
    }
    int maxCount = 0;
    for(int i=0;i<26;i++){
        if(arr[i]>maxCount){
            maxCount = arr[i];
        }
    }
    for (int i=0;i<26;i++){
        if(arr[i]==maxCount){
            char ch = (char)(i + 97);
            cout<<ch<<" "<<maxCount<<endl;
        }
    }

}