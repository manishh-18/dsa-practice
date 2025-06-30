// Problem: Single Number (LeetCode #136)
// Link: https://leetcode.com/problems/single-number/
// Difficulty: Easy


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XOR = 0;
        for (auto i : nums) {
            XOR = XOR ^ i;
        }
        return XOR;
    }
};
