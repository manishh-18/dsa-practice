// Problem: Score of a String (LeetCode #3110)
// Link: https://leetcode.com/problems/score-of-a-string/
// Difficulty: Easy


class Solution {
public:
    int scoreOfString(string& s) {
        int n = s.size();
        int ans = 0;
        for (int i = 1; i < n; i++)
            ans += abs(s[i] - s[i - 1]);
        return ans;
    }
};