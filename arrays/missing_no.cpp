// Problem: Missing Number (LeetCode #268)
// Link: https://leetcode.com/problems/missing-number/
// Difficulty: Easy


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cnt = 0;
        for (auto i : nums) {
            if (i != cnt)
                return cnt;
            cnt++;
        }
        return cnt;
    }
};