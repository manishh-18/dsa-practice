// Problem: Subarray Sum Equals K (LeetCode #560)
// Link: https://leetcode.com/problems/subarray-sum-equals-k/
// Difficulty: Medium



class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int preSum = 0, cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            preSum += nums[i];
            int req = preSum - k;
            cnt += mpp[req];
            mpp[preSum]++;
        }
        return cnt;
    }
};