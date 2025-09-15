// Problem: Convert Integer to the Sum of Two No-Zero Integers (LeetCode #1317)
// Link: https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/
// Difficulty: Easy


class Solution {
public:
    bool conZero(int n) {
        while (n > 0) {
            if (n % 10 == 0)
                return true;
            n /= 10;
        }
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        for (int i = 1; i < n; i++) {
            if (conZero(i) == false && conZero(n - i) == false) {
                return { i, n - i };
            }
        }

        return {1,1};
    }
};