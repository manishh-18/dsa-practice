// Problem: Check if all 1's are at least length k places away (LeetCode 1437)
// Link: https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/
// Difficulty: Easy



class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int lastOccured = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                if (lastOccured != -1) {
                    int gap = i - lastOccured - 1;
                    if (gap < k) return false;
                }
                lastOccured = i;
            }
        }
        return true;
    }
};