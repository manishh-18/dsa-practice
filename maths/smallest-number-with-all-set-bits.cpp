// Problem: Smallest Number with All Set Bits (LeetCode #3370)
// Link: https://leetcode.com/problems/smallest-number-with-all-set-bits/
// Difficulty: Easy


class Solution {
public:
    int smallestNumber(int n) {
        int pow2 = 2;
        while(true){
            if(pow2 > n) return pow2 - 1;
            else pow2 *= 2;
        }
        return pow2 - 1;
    }
};