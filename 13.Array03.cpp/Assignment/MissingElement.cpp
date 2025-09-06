// find the smallest positive Missing element in the sorted array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end()); 
    // Find the smallest positive missing element
    int missing = 1; // Start checking from the smallest positive integer
    for(int i=0; i<n; i++) {
       if(v[i]<0)
       continue; // Ignore negative numbers
       else if(v[i]>missing){
        cout<<missing;
        break; // Found the first missing positive integer
       }
       else{
        missing++;
       }
    }
}