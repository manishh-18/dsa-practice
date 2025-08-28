// Problem: Permutation Difference between Two Strings (LeetCode #3146)
// Link: https://leetcode.com/problems/permutation-difference-between-two-strings/
// Difficulty: Easy



class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int>idx(26);
        for(int c = 0; c < t.length(); c++){
            idx[t[c] - 'a'] = c;
        }
        int ans = 0;
        for(int c = 0; c < s.length(); c++){
            ans += abs(c - idx[s[c] - 'a']);
        }
        return ans;
    }
};