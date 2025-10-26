// Problem: Smallest Missing Multiple of K
// Contest: Leetcode - Weekly Contest 472
// URL: https://leetcode.com/contest/weekly-contest-472/problems/smallest-missing-multiple-of-k/


class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>s(nums.begin(),nums.end());
        int x = k;
        while(true){
            if(s.find(x) == s.end()) return x;
            x += k;
        }
    }
};