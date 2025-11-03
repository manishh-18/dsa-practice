// Problem : Smallest Missing Multiple of K (LeetCode #3718)
// URL     : https://leetcode.com/problems/smallest-missing-multiple-of-k/
// Difficulty : Medium

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