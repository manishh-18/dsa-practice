// Problem : Find the pivot integer (Leetcode #2485)
// Link : https://leetcode.com/problems/find-the-pivot-integer/
// Difficulty : Easy


class Solution {
public:
    int pivotInteger(int n) {
        int total = n * (n + 1) / 2;
        int x = sqrt(total);
        if (x * x == total) return x;
        return -1;
    }
};
