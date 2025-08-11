// Problem: Smallest Subarrays With Maximum Bitwise OR (LeetCode #2411)
// Link: https://leetcode.com/problems/smallest-subarrays-with-maximum-bitwise-or/
// Difficulty: Medium



class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> lastSeen(30, 0), res(n, 1);
        for (int i = n - 1; i >= 0; --i) {
            for (int bit = 0; bit < 30; ++bit) {
                if ((nums[i] & (1 << bit)) > 0)
                    lastSeen[bit] = i;
                res[i] = max(res[i], lastSeen[bit] - i + 1);
            }
        }
        return res;
    }
};