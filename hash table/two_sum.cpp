// Problem: Two Sum (LeetCode #1)
// Link: https://leetcode.com/problems/two-sum/
// Difficulty: Easy



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int req = 0;
        for (int i = 0; i < nums.size(); i++) {
            req = target - nums[i];
            if (m.find(req) != m.end())
                return {m[req], i};
            m[nums[i]] = i;
        }
        return {-1, -1};
    }
};