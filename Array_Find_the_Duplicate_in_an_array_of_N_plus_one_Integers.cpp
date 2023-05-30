// #include<iostream>
// #include<vector>
// using namespace std;

// int findDuplicate(vector<int>&nums){
//     // Visited approach
//     int ans = -1;

//     for(int i = 0; i < nums.size(); i++){
//         int index = abs(nums[i]);

//         // Already visited
//         if(nums[index] < 0){
//             ans = index;
//             break;
//         }
//         else{
//             // Visited mark
//             nums[index] = nums[index]*(-1);
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int>nums{1,3,4,2,2};
//     cout << findDuplicate(nums) << endl;
// }

// TC: O(n)
// SC: O(1)

// Fast and Slow pointer

#include<bits/stdc++.h>

using namespace std;
int findDuplicate(vector < int > & nums) {
  int slow = nums[0];
  int fast = nums[0];
  do {
    slow = nums[slow];
    fast = nums[nums[fast]];
  } while (slow != fast);
  fast = nums[0];
  while (slow != fast) {
    slow = nums[slow];
    fast = nums[fast];
  }
  return slow;
}
int main() {
  vector < int > arr;
  arr = {1,3,4,2,3};
  cout << "The duplicate element is " << findDuplicate(arr) << endl;
}

// TC: O(n)
// SC: O(1)