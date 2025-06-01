// Problem: Subtract the Product and Sum of Digits of an Integer (LeetCode #1281)
// Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
// Difficulty: Easy


class Solution {
public:
    int subtractProductAndSum(int n) {
        int ld, sum = 0, product = 1;
        while (n != 0) {
            ld = n % 10;
            sum = sum + ld;
            product = product * ld;
            n = n / 10;
        }
        int answer=product-sum;
        return answer;
    }
};