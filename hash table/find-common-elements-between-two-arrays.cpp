// Problem: Find Common Elements Between Two Arrays (LeetCode #2956)
// URL: https://leetcode.com/problems/intersection-of-two-arrays/
// Difficulty: Easy

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int ans1 = 0;
        int ans2 = 0;
        unordered_set<int>s1(nums1.begin(),nums1.end());
        unordered_set<int>s2(nums2.begin(),nums2.end());
        for(auto i : nums1){
            if(s2.find(i) != s2.end()) ans1++;
        }
        for(auto i : nums2){
            if(s1.find(i) != s1.end()) ans2++;
        }
        return {ans1,ans2};
    }
};