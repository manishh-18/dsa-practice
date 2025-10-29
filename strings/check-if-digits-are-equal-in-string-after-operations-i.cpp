// Problem: Check if Digits are Equal in String After Operations I (LeetCode #3461)
// URL: https://leetcode.com/problems/check-if-digits-are-equal-in-string-after-operations-i/
// Difficulty: Easy


class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.size() != 2) {
            string s1 = "";
            for (int i = 1; i < s.size(); i++) {
                int x = ((s[i] - 'a') + (s[i - 1] - 'a')) % 10;
                s1 += (x + 'a');
            }
            s = s1;
        }
        return s[0] == s[1];
    }
};