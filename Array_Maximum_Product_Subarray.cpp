// Kadane's Algorithm
#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int>& nums) {
    int prod1 = nums[0],prod2 = nums[0],result = nums[0];
    
    for(int i=1;i<nums.size();i++) {
        int temp = max({nums[i],prod1*nums[i],prod2*nums[i]});
        prod2 = min({nums[i],prod1*nums[i],prod2*nums[i]});
        prod1 = temp;
        
        result = max(result,prod1);
    }
    
    return result;
}

int main() {
    vector<int> nums = {1,2,-3,0,-4,-5};
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    return 0;
}
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Two Traversals

// #include<bits/stdc++.h>
// using namespace std;

// int maxProductSubArray(vector<int>& nums) {
//     int maxLeft = nums[0];
//     int maxRight = nums[0];
    
//     int prod = 1;
    
//     bool zeroPresent =  false;
    
//     for(auto i:nums) {
//         prod *= i;
//         if(i == 0) {
//             zeroPresent = true;
//             prod = 1;
//             continue;
//         }
//         maxLeft = max(maxLeft,prod);
//     }
    
//     prod = 1;
    
//     for(int j=nums.size()-1;j>=0;j--) {
//         prod *= nums[j];
//         if(nums[j] == 0) {
//             zeroPresent = true;
//             prod = 1;
//             continue;
//         }
//         maxRight = max(maxRight,prod);
//     }
    
//     if(zeroPresent) return max(max(maxLeft,maxRight),0);
//     return max(maxLeft,maxRight);
// }

// int main() {
//     vector<int> nums = {1,2,-3,0,-4,-5};
//     cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
//     return 0;
// }


// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Optimised Brute force

// #include<bits/stdc++.h>
// using namespace std;

// int maxProductSubArray(vector<int>& nums) {
//     int result = nums[0];
//     for(int i=0;i<nums.size()-1;i++) {
//         int p = nums[i];
//         for(int j=i+1;j<nums.size();j++) {
//            result = max(result,p);
//            p *= nums[j];
//         }
//         result = max(result,p);//manages (n-1)th term 
//     }
//     return result;
// }

// int main() {
//     vector<int> nums = {1,2,-3,0,-4,-5};
//     cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Bruteforce
// #include<bits/stdc++.h>
// using namespace std;

// int maxProductSubArray(vector<int>& nums) {
//     int result = INT_MIN;
//     for(int i=0;i<nums.size()-1;i++) {
//         for(int j=i+1;j<nums.size();j++) {
//             int prod = 1;
//             for(int k=i;k<=j;k++) 
//                 prod *= nums[k];
//             result = max(result,prod);    
//         }
//     }
//     return result;
// }

// int main() {
//     vector<int> nums = {1,2,-3,0,-4,-5};
//     cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
//     return 0;
// }
