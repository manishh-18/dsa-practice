// Problem: Running Sum of 1d Array (Leetcode 1480)
// Link: https://leetcode.com/problems/running-sum-of-1d-array/
// Difficulty: Easy


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int run = 0;
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++){
            run += nums[i];
            ans.push_back(run);
        }
        return ans;
    }
};