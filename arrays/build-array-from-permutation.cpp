// Problem: Build Array from Permutation (LeetCode #1920)
// Link: https://leetcode.com/problems/build-array-from-permutation/
// Difficulty: Easy



class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++){
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};