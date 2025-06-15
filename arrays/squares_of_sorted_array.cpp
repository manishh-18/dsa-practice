// Problem: Squares of a Sorted Array (LeetCode #977)
// Link: https://leetcode.com/problems/squares-of-a-sorted-array/
// Difficulty: Easy


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};
