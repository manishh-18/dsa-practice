// Problem: Water Bottles II (LeetCode #3100)
// Link: https://leetcode.com/problems/water-bottles-ii/
// Difficulty: Medium



class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int bottlesDrunk = numBottles;
        int emptyBottles = numBottles;
        int fullBottles = 0;
        while(numExchange <= emptyBottles){
            emptyBottles++;
            emptyBottles -= numExchange;
            numExchange++;
            bottlesDrunk++;
        }
        return bottlesDrunk;
    }
};