// Problem : Find Maximum Balanced XOR Subarray Length (Leetcode #3755)
// URL     : https://leetcode.com/problems/find-maximum-balanced-xor-subarray-length/
// Difficulty : Medium


class Solution {
public:
    int maxBalancedSubarray(vector<int>& nums) {
        unordered_map<int,unordered_map<int,int>>m;
        int balance = 0;
        int preXOR = 0;
        int ans = 0;
        m[0][0] = -1;
        for(int i = 0; i < nums.size(); i++){
            preXOR ^= nums[i];
            if(nums[i] % 2 == 0) balance++;
            else balance--;

            if(m[preXOR].count(balance)){
                ans = max(ans, i - m[preXOR][balance]);
            }
            else m[preXOR][balance] = i;
        }
        return ans;
    }
};