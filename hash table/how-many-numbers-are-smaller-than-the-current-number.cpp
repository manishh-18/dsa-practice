// Problem: How Many Numbers Are Smaller Than the Current Number (LeetCode #1365)
// Link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
// Difficulty: Easy

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int , int> map;
        vector<int> sorted(nums);
        sort(sorted.begin(), sorted.end());
        int n = nums.size(), j = 0;
        for(int i = 0; i < n; ++i){
            if(!map.count(sorted[i])) map[sorted[i]] = i;
        }
        for(int i = 0; i < n; ++i) nums[i] = map[nums[i]];
        return nums;
    }
};