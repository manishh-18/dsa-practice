// Problem: Majority Element II (LeetCode #229)
// Link: https://leetcode.com/problems/majority-element-ii/
// Difficulty: Medium 


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if (nums.size() == 1) return {nums[0]};
        int n = nums.size();
        int el1, el2;
        int cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < n; i++) {
            if (cnt1 == 0 && nums[i] != el2) {
                el1 = nums[i];
                cnt1 = 1;
            } 
            else if (cnt2 == 0 && nums[i] != el1) {
                el2 = nums[i];
                cnt2 = 1;
            } 
            else if (nums[i] == el1) {
                cnt1++;
            } 
            else if (nums[i] == el2) {
                cnt2++;
            } 
            else {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0, cnt2 = 0;
        vector<int>ans;
        for(auto i:nums){
            if(i == el1) cnt1++;
            if(i == el2) cnt2++;
        }

        if(cnt1 > n/3) ans.push_back(el1);
        if(cnt2 > n/3) ans.push_back(el2);
        return ans;
    }
};