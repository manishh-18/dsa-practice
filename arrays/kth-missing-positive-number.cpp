// Problem: Find the Kth missing positive number in an array (LeetCode #1539)
// Link: https://leetcode.com/problems/kth-missing-positive-number/
// Difficulty: Easy


class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ans = k;
        for(auto i : arr){
            if(i <= ans) ans++;
            else break;
        }
        return ans;
    }
};