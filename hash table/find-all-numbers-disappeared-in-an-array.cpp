// Problem: Find All Numbers Disappeared in an Array (LeetCode #448)
// Link: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
// Difficulty: Easy


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>num;
        vector<int>ans;
        for(auto i : nums) num.insert(i);

        for(int i = 1; i <= nums.size(); i++){
            if(num.count(i) == 0) ans.emplace_back(i);
        }
        return ans;
    }
};