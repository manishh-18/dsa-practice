// Problem: Compute the alternating sum (Leetcode #3701)
// URL: https://leetcode.com/problems/compute-alternating-sum/
// Difficulty: Easy

class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(i % 2 == 0) sum += nums[i];
            else sum -= nums[i];
        }
        return sum;
    }
};