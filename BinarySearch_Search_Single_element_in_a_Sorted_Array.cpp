#include<bits/stdc++.h>

using namespace std;
class Solution {
    public:
        int findSingleElement(vector < int > & nums) 
        {
            int = nums.size();
            int low = 0;
            int high = n-2;

            while(low <= high){
                int mid = (low+high)/2;

                if(nums[mid] == nums[mid^1]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
            return nums[low];
        }
};

int main() {
    Solution obj;
    vector < int > v {1,1,2,3,3,4,4,8,8
    };

    int elem = obj.findSingleElement(v);
    cout << "The single occurring element is " << elem << endl;

}