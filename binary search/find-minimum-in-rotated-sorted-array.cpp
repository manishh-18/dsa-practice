// Problem: Find Minimum in Rotated Sorted Array (LeetCode #153)
// Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// Difficulty: Medium



class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int mini = INT_MAX;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] >= nums[low]){
                mini = min(mini,nums[low]);
                low = mid + 1; 
            }
            else{
                mini = min(mini,nums[mid]);
                high = mid - 1;
            }

        }
        return mini;
    }
};