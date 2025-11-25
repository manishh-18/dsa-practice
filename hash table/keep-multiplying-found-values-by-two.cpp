// Problem : Keep multiplying found values by two (Leetcode 2154)
// Link    : https://leetcode.com/problems/keep-multiplying-found-values-by-two/
// Difficulty : Easy




class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> s(nums.begin(), nums.end());
        while (s.find(original) != s.end()) {
            original *= 2;
        }

        return original;
    }
};