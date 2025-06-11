// Problem: Clear Digits (LeetCode #3174)
// Link: https://leetcode.com/problems/clear-digits/
// Difficulty: Easy


class Solution {
public:
    string clearDigits(string s) {
        string stack;
        for (auto c : s) {
            if (isdigit(c)) {
                if (!stack.empty())
                    stack.pop_back();
            } else {
                stack.push_back(c);
            }
        }
        return stack;
    }
};