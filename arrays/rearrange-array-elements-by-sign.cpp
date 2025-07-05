// Problem: Rearrange Array Elements by Sign (LeetCode #2149)
// Link: https://leetcode.com/problems/rearrange-array-elements-by-sign/
// Difficulty: Medium



class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        int pos = 0,neg=1;
        for(auto i:nums){
            if(i>0){
                ans[pos] = i;
                pos+=2;
            }else{
                ans[neg] = i;
                neg+=2;
            }
        }
        return ans;
    }
};