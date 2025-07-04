// Problem: Find the Original Typed String I (LeetCode #3330)
// Link: https://leetcode.com/problems/find-the-original-typed-string-i/
// Difficulty: Easy


class Solution {
public:
    int possibleStringCount(string word) {
        int count = 1;
        for (int i = 1; i < word.length(); i++) {
            if (word[i] == word[i - 1])
                count++;
        }
        return count;
    }
};