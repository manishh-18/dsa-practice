// Problem: Number of Zero-Filled Subarrays (LeetCode #2348)
// Link: https://leetcode.com/problems/number-of-zero-filled-subarrays/
// Difficulty: Medium



class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt = 0;
        long long streak = 0;
        for (auto n : nums) {
            if (n == 0) {
                streak++;
                cnt += streak;
            } else {
                streak = 0;
            }
        }
        return cnt;
    }
};