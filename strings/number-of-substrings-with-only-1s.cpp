// Problem : Number of substrings with Only 1s (Leetcode 1513)
// Link : https://leetcode.com/problems/number-of-substrings-with-only-1s/
// Difficulty : Medium


class Solution {
public:
    int numSub(string s) {
        int cnt = 0, total = 0, mod = 1e9 + 7;
        for (char a : s) {
            if (a == '1') {
                cnt++;
            } else {
                cnt = 0;
            }
            total = (total + cnt) % mod;
        }
        return total;
    }
};