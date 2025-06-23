// Problem: Remove Duplicates from Sorted Array (LeetCode #26)
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Difficulty: Easy


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[k] != nums[i]) {
                swap(nums[k + 1], nums[i]);
                k++;
            }
        }
        return k + 1;
    }
};