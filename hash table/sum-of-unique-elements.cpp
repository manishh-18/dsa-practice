// Problem: sum of unique elements in an array(LeetCode 1748)
// Link: https://leetcode.com/problems/sum-of-unique-elements/
// Difficulty: Easy

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        unordered_map<int,int>m;
        for(auto i : nums){
            m[i]++;
        }
        for(auto i : m){
            if(i.second == 1) sum += i.first;
        }
        return sum;
    }
};