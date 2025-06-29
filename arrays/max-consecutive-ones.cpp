// Problem: Max Consecutive Ones (LeetCode #485)
// Link: https://leetcode.com/problems/max-consecutive-ones/
// Difficulty: Easy


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int count = 0;
        for(auto i:nums){
            if(i==1) count++;
            else count = 0;
            max_count = max(count,max_count);
        }
        return max_count;
    }
};