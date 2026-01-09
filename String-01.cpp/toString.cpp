// its convert int, float, double, char to string
#include<iostream>
#include<string>
using namespace std;
int main(){
    int a = 10;
    float b = 5.5;
    double c = 7.77777;
    char d = 'k';
    string s1 = to_string(a);
    string s2 = to_string(b);
    string s3 = to_string(c);
    string s4 = to_string(d);
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
}