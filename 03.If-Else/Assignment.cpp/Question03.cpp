// Any year is input through the keyboard. Write a program to determine whether the year is a leap year 
// or not. (Considering leap year occurs after every 4 years)
// Input 1: 1976
// Output: yes
// Input 2: 2003
// Output: no
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the Year: ";
    cin>>year;
    // leap year if perfectly divisible by 400
 if (year % 400 == 0) {
 cout << year << " is a leap year.";
 }
 // not a leap year if divisible by 100
 // but not divisible by 400
 else if (year % 100 == 0) {
 cout << year << " is not a leap year.";
 }
 // leap year if not divisible by 100
 // but divisible by 4
 else if (year % 4 == 0) {
 cout << year << " is a leap year.";
 }
 // all other years are not leap years
 else {
 cout << year << " is not a leap year.";
 }
}