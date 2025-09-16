// Problem: Replace Elements in an Array (LeetCode #2295)
// Link: https://leetcode.com/problems/replace-elements-in-an-array/
// Difficulty: Medium



class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        int map[1000001] = {0};
        int n = nums.size();
        int m = operations.size();
        for(int i = 0; i < n; i++){
            map[nums[i]] = i; 
        }
        for(int j = 0; j < m; j++){
            // remember this exchange so that if the number which is changed is not in the map should be in the map
            int from = operations[j][0], to = operations[j][1];
            int idx = map[from];
            nums[idx] = to;
            map[to] = idx;
        }
        return nums;
    }
};