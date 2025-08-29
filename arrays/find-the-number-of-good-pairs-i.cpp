// Problem: Find the Number of Good Pairs I (LeetCode #3162)
// Link: https://leetcode.com/problems/find-the-number-of-good-pairs-i/
// Difficulty: Easy


class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int cnt = 0;
        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] % (nums2[j] * k) == 0) cnt++;
            }
        }
        return cnt;
    }
};