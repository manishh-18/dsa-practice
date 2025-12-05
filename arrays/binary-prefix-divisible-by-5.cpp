// Problem : Binary Prefix Divisible by 5 (LeetCode 1018)
// URL     : https://leetcode.com/problems/binary-prefix-divisible-by-5/
// Diffuculty : Easy

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int val = 0;
        vector<bool> res;

        for (auto& n : nums) {
            val = ((val << 1) + n) % 5;
            res.push_back(val == 0);
        }

        return res;
    }
};
// Time Complexity: O(N)
// Space Complexity: O(1) (not counting the output array)