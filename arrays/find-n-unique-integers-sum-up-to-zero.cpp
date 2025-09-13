// Problem: Find N Unique Integers Sum up to Zero (LeetCode #1304)
// Link: https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
// Difficulty: Easy



class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        if(n % 2 != 0){
            ans.push_back(0);
        }
        for(int i = 1; i*2 <= n; i++){
            ans.push_back(i);
            ans.push_back(-i);
        }

        return ans;
    }
};