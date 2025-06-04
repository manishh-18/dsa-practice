// Problem: Power of Three (LeetCode #326)
// Link: https://leetcode.com/problems/power-of-three/
// Difficulty: Easy


class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        return n%3==0 && isPowerOfThree(n/3);
    }
};