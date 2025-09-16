// Problem: Find Occurrences of an Element in an Array (LeetCode #3159)
// Link: https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/
// Difficulty: Medium



class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> pos;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x)
                pos.push_back(i);
        }

        vector<int> ans;
        for (int k : queries) {
            // k-th occurrence is pos[k-1], as occurrences are 1-based
            if (k <= pos.size())
                ans.push_back(pos[k - 1]);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};