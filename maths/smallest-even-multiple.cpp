// Problem: Smallest Even Multiple (LeetCode #2413)
// Link: https://leetcode.com/problems/smallest-even-multiple/
// Difficulty: Easy


class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans = 2;
        while(true){
            if(ans % n == 0) return ans;
            else ans += 2;
        }
        return ans;
    }
};