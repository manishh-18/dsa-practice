// Problem: Transform Array by Parity (LeetCode #3467)
// Link: https://leetcode.com/problems/transform-array-by-parity/
// Difficulty: Easy


class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> res;
        int j = 0;
        for (auto i : nums) {
            if (i % 2 == 0) {
                res.push_back(0);
                j++;
            }
        }
        while (j < nums.size()) {
            res.push_back(1);
            j++;
        }
        return res;
    }
};