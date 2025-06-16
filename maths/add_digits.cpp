// Problem: Add Digits (LeetCode #258)
// Link: https://leetcode.com/problems/add-digits/
// Difficulty: Easy


class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        while (num) {
            sum += (num % 10);
            num /= 10;
        }
        if (sum < 10)
            return sum;
        else
            return addDigits(sum);
    }
};