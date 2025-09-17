// Problem: Find First and Last Position of Element in Sorted Array (LeetCode #34)
// Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// Difficulty: Medium



class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        if(lb == nums.size() || nums[lb] != target) return {-1,-1};
        int up = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
        return {lb,up-1};
    }
};