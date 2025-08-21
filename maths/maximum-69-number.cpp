// Problem: Maximum 69 Number (LeetCode #1323)
// Link: https://leetcode.com/problems/maximum-69-number/
// Difficulty: Easy



class Solution {
public:
    int maximum69Number(int num) {
        string s = to_string(num);
        for (char& c : s) {
            if (c == '6') {
                c = '9';
                break;
            }
        }
        return stoi(s);
    }
};