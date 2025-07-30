// // leetcode question
// #include<iostream>
// #include<vector>
// using namespace std;
// // void reverse(vector<int>& nums, int i, int j){
// //     while(i<j){
// //         int temp = nums[i];
// //         nums[i] = nums[j];
// //         nums[j] = temp;
// //         i++;
// //         j--;
// //     }
// // }
// void nextpermutation(vector <int>& nums){
//     int n = nums.size();
//     // finding pivot index
//     int idx = -1;
//     for(int i=n-2;i>=0;i--){
//         if(nums[i]<nums[i+1]){
//             idx = i;
//             break;
//         }
//     }
//     if(idx==-1){
//        // reverse(nums,0,-1);
//        reverse(nums.begin(),nums.end());
//        return;
//     }

//     //sorting/reverse after pivot
//     reverse(nums.begin()+idx+1,nums.end());
//     // swappig idx and idx+1
//     int temp = nums[idx];
//     nums[idx] = nums[idx+1];
//     muns[idx+1] = temp;
//     return;
// }

