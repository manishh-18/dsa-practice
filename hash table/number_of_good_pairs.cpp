// Problem: Number of Good Pairs (LeetCode #1512)
// Link: https://leetcode.com/problems/number-of-good-pairs/
// Difficulty: Easy


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res = 0;
        unordered_map<int,int>m;
        for(auto i:nums){
            res+=m[i]++;
        }
        return res;
    }
}; 