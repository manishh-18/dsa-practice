// Problem: Intersection of Two Arrays (LeetCode #349)
// URL: https://leetcode.com/problems/intersection-of-two-arrays/
// Difficulty: Easy


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
        int i = 0;
        int j = 0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] == nums2[j] && (ans.empty() || ans.back() != nums1[i])){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] > nums2[j]) j++;
            else i++;
        }
        return ans;
    }
};