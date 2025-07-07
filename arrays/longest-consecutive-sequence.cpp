// Problem: Longest Consecutive Sequence (LeetCode #128)
// Link: https://leetcode.com/problems/longest-consecutive-sequence/
// Difficulty: Medium



#include <bits/stdc++.h>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int longest = 1;
        unordered_set<int> s;
        for (auto i : nums) {
            s.insert(i);
        }
        for (auto it : s) {
            if (s.find(it - 1) == s.end()) {
                int count = 1;
                int el = it;
                while (s.find(el + 1) != s.end()) {
                    el = el + 1;
                    count++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};