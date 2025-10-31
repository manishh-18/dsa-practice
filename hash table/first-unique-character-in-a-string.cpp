// Problem: First Unique Character in a String (LeetCode 387)
// URL: https://leetcode.com/problems/first-unique-character-in-a-string/
// Difficulty: Easy


class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] == 1) {
                return i;
            }
        }

        return -1;        
    }
};