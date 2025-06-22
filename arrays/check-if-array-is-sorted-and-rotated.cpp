// Problem: Check if Array Is Sorted and Rotated (LeetCode #1752)
// Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
// Difficulty: Easy


class Solution {
public:
    bool check(vector<int>& nums) {
        int violate = 0;
        int size = nums.size();
        for (int i = 1; i < size; i++) {
            if (nums[i] < nums[i - 1])
                violate++;
        }
        if (nums[0] < nums[size - 1])
            violate++;
        return (violate > 1) ? false : true;
    }
};