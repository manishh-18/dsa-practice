// Problem: Water Bottles (LeetCode #1518)
// Link: https://leetcode.com/problems/water-bottles/
// Difficulty: Easy

class Solution {
public:
    // int numWaterBottles(int numBottles, int numExchange) {
    //     int empty = numBottles;
    //     int ans = numBottles;
    //     while(empty >= numExchange){
    //         int temp = empty / numExchange;
    //         ans += temp;
    //         empty = empty % numExchange;
    //         empty += temp;
    //     }
    //     return ans;
    // }
    int numWaterBottles(int n, int k) {
        return n+(n-1)/(k-1);
    }
};