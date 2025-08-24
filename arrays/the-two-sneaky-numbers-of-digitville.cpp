// Problem: The Two Sneaky Numbers of Digitville (LeetCode #3289)
// Link: https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/
// Difficulty: Easy



class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]) ans.emplace_back(nums[i]);
        }
        return ans;
    }
};