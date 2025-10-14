// Problem: Find Pivot Index (LeetCode #724)
// URL: https://leetcode.com/problems/find-pivot-index
// Difficulty: Easy



class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = accumulate(nums.begin(),nums.end(),0);
        int pre = 0;
        for(int i = 0; i < nums.size(); i++){
            int post = total - pre - nums[i];
            if(pre == post) return i;
            pre += nums[i];
        }
        return -1;
    }
};