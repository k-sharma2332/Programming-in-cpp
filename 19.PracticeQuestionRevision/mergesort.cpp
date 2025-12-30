#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector <int>& arr1, vector<int>& arr2){
    int n = arr1.size();
   int m = arr2.size();
   vector <int> res(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<=n && j<=m){
        if(arr1[i]<arr2[j]){
            res[k] = arr1[i];
            i++;
        }
        else{  // arr2[j]<arr1[i]
            res[k] = arr2[j];
            j++;
        }
        k++;
    }
    // for remaining elements
    if(i==n){  // arr1 ke sare element uta chuka hu
        while(j<=m-1){
            res[k] = arr2[j];
            k++;
            j++;
        }
    }
    if(j==m){
        while(i<=n-1){
            res[k]=arr1[i];
            k++;
            i++;
        }
    }
    return res;
}
int mani(){
   
    vector<int> arr1;
   
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
     for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
   cout<<" ";
    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
     for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    vector<int> v = merge(arr1,arr2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

//leetcode
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i=m-1;
//         int j=n-1;
//         int k=m+n-1;
//         while(i>=0&&j>=0){
//             if(nums1[i]>nums2[j]){
//                 nums1[k] = nums1[i];
//                 k--;
//                 i--;
//             }
//             else{ //num2[j]>num1[i]
//                  nums1[k] = nums2[j];
//                  k--;
//                  j--;
//             }
//         }
//         if(i<0){
//             while(j>=0){
//                 nums1[k] = nums2[j];
//                  k--;
//                  j--;
//             }
//         }
//         if(j<=0){
//             while(i>=0){
//             nums1[k] = nums1[i];
//                 k--;
//                 i--;
//         }
//         }
//         return;
//     }
// };