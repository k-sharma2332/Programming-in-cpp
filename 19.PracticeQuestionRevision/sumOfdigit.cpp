#include<iostream>
using namespace std;
int sumOfdigit(int n){
    int digitSum=0;
     while( n>0){
        int lastDigit=n%10;
        n=n/10;
        digitSum+=lastDigit;
        
     }
        return digitSum;
}

int main(){
   cout<<sumOfdigit(23434);
   return 0;
}

