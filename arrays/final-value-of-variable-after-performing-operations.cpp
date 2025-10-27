// Problem: Final Value of Variable After Performing Operations (LeetCode 2011)
// URL: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
// Difficulty: Easy


class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(auto i : operations){
            if(i == "--X" || i == "X--") x--;
            else x++;
        }
        return x;
    }
};