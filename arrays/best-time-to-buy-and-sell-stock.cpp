// Problem: Best Time to Buy and Sell Stock (LeetCode #121)
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Difficulty: Easy



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for(auto i:prices){
            minPrice = min(minPrice,i);
            maxProfit = max(maxProfit,i-minPrice);
        }
        return maxProfit;
    }
};