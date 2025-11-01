// Problem: Calculate Money in Leetcode Bank (LeetCode 1716)
// URL: https://leetcode.com/problems/calculate-money-in-leetcode-bank/
// DIFFICULTY: Easy

class Solution {
public:
    int totalMoney(int n) {
        int ans = 0;
        int mon = 1;
        int j = 1;
        for(int i = 1; i <= n; i++){
            ans += j;
            j++;
            if(i % 7 == 0){
                mon++;
                j = mon;
            } 
        }
        return ans;
    }
};