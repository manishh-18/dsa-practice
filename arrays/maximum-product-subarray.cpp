// Problem: Maximum Product Subarray (LeetCode #152)
// Link: https://leetcode.com/problems/maximum-product-subarray/
// Difficulty: Medium



class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix = 1, suffix = 1;
        int n = nums.size();
        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (prefix == 0) prefix = 1;
            if (suffix == 0) suffix = 1;
            prefix *= nums[i];
            suffix *= nums[n - 1 - i];
            ans = max(ans, max (prefix, suffix));
        }
        return ans;
    }
};