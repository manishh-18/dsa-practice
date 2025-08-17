// Problem: Happy Number (LeetCode #202)
// Link: https://leetcode.com/problems/happy-number/
// Difficulty: Easy



class Solution {
public:
    bool isHappy(int n) {
        if (n == 1 || n == 7)
            return true;
        else if (n < 10)
            return false;
        else {
            int sum = 0;
            while (n > 0) {
                int ld = n % 10;
                sum += ld * ld;
                n = n / 10;
            }
            return isHappy(sum);
        }
    }
};