// Problem: Buy Two Chocolates (LeetCode #2706)
// URL: https://leetcode.com/problems/buy-two-chocolates/
// Difficulty: Easy
// Related Topics: Array, Sorting, Greedy



class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        if(prices[0] + prices[1] <= money) return money - (prices[0] + prices[1]);
        return money;
    }
};
