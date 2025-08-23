// Problem: The Two Sneaky Numbers of Digitville (LeetCode #3289)
// Link: https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/
// Difficulty: Easy


class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>v;
        for(auto i:nums){
            m[i]++;
            if(m[i] > 1) v.push_back(i);
        }
        return v;
    }
};