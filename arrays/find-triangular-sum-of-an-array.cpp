// Problem: Find Triangular Sum of an Array (LeetCode #2221)
// Link: https://leetcode.com/problems/find-triangular-sum-of-an-array/
// Difficulty: Medium



class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int>temp(nums.begin(),nums.end());
        while(temp.size() > 1){
            for(int i = 0; i < temp.size() - 1; i++){
                temp[i] = (temp[i] + temp[i + 1]) % 10;
            }
            temp.pop_back();
        }
        return temp[0];
    }
};