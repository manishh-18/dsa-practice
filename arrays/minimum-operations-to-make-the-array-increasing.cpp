// Problem: Minimum Operations to Make the Array Increasing (LeetCode 1827)
// URL: https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/
// Difficulty: Easy

class Solution {
public:
    int minOperations(vector<int>& arr) {
        int ans = 0;
        if(arr.size() == 1) return ans;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] > arr[i - 1]) continue;
            else {
                ans += (arr[i - 1] + 1) - arr[i];
                arr[i] = arr[i - 1] + 1;
            }
        }
        return ans;
    }
};