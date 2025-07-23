// Problem: Search Insert Position (LeetCode #35)
// Link: https://leetcode.com/problems/search-insert-position/
// Difficulty: Easy


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    }
};