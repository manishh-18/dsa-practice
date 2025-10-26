// Problem: Longest Balanced Subarray I
// Contest: Leetcode - Weekly Contest 472
// URL: https://leetcode.com/contest/weekly-contest-472/problems/longest-balanced-subarray-i/


class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 0;
        auto tavernilo = nums;
        for (int i = 0; i < n; ++i) {
            unordered_set<int> evens, odds;
            for (int j = i; j < n; ++j) {
                int x = nums[j];
                if ((x & 1) == 0) evens.insert(x);
                else odds.insert(x);

                if (evens.size() == odds.size()) {
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }
        return maxLen;
    }
};