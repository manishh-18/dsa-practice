// Problem: Search in Rotated Sorted Array II (LeetCode 81)
// URL: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
// Difficulty: Medium



class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        while(low <= high){
            if(nums[low] == nums[high]){
                if(nums[low] == target) return true;
                else {
                    low++; high--;
                    continue;
                }
            }
            int mid = (low + high) / 2;
            if(nums[mid] == target) return true;
            else{
                // left is sorted
                if(nums[low] <= nums[mid]){
                    if(nums[low] <= target && target <= nums[mid]) high = mid - 1;
                    else low = mid + 1;
                }
                // right is sorted
                else{
                    if(nums[mid] <= target && target <= nums[high]) low = mid + 1;
                    else high = mid - 1;
                }
            }
        }
        return false;
    }
};