// Problem: 1-bit and 2-bit Characters (LeetCode 717)
// Link: https://leetcode.com/problems/1-bit-and-2-bit-characters/
// Difficulty: Easy


class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) { 
        bits.pop_back(); // remove guaranteed last 0
        int n = bits.size();

        // short-circuit: input is empty or last bit is 0
        if (n == 0 || bits.back() == 0) return true;

        int i = 0;
        while (i < n - 1)
            i += bits[i] + 1;

        return i == n;
    }
};
