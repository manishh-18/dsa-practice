// Problem : Minimum Operations to Make Array Sum Divisible by K (Leetcode 3512)
// Link    : https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/
// Difficulty : Medium


class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long sum = 0;
        for(int x : nums) sum += x;
        return sum % k;
    }
};