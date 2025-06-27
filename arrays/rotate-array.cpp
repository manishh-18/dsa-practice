// Problem: Rotate Array (LeetCode #189)
// Link: https://leetcode.com/problems/rotate-array/
// Difficulty: Medium


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin() + (n - k), nums.end());
        reverse(nums.begin(), nums.begin() + (n - k));
        reverse(nums.begin(), nums.end());
    }
};