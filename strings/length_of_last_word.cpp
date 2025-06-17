// Problem: Length of Last Word (LeetCode #58)
// Link: https://leetcode.com/problems/length-of-last-word/
// Difficulty: Easy


class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = n - 1;
        int length = 0;
        while (i >= 0 && s[i] == ' ')
            i--;
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }
        return length;
    }
};