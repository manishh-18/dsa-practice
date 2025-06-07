// Problem: Majority Element (LeetCode #169)
// Link: https://leetcode.com/problems/majority-element/
// Difficulty: Medium


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }
        n = n / 2;
        for (auto i : m) {
            if (i.second > n) {
                return i.first;
            }
        }
        return 0;
    }
};