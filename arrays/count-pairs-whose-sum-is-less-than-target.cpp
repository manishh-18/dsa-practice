// Problem: Count Pairs Whose Sum is Less than Target (LeetCode #2824)
// Link: https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/
// Difficulty: Easy

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int cnt = 0;
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] < target) cnt++;
            }
        }
        return cnt;
    }
};