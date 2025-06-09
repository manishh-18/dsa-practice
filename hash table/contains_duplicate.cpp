// Problem: Contains Duplicate (LeetCode #217)
// Link: https://leetcode.com/problems/contains-duplicate/
// Difficulty: Easy


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for (auto i : nums) {
            m[i]++;
            if (m[i] > 1)
                return true;
        }
        return false;
    }
};