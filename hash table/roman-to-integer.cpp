// Problem: Roman to Integer (LeetCode #13)
// Link: https://leetcode.com/problems/roman-to-integer/
// Difficulty: Easy



class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {{'I', 1},   {'V', 5},   {'X', 10},
                                          {'L', 50},  {'C', 100}, {'D', 500},
                                          {'M', 1000}};
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            int curr = roman[s[i]];
            int next = (i + 1 < s.size()) ? roman[s[i + 1]] : 0;

            if (curr >= next) {
                ans += roman[s[i]];
            } else {
                ans -= roman[s[i]];
            }
        }
        return ans;
    }
};