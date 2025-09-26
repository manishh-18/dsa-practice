// Problem : Find the Smallest Divisor Given a Threshold (LeetCode #1283)
// Link : https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
// Difficulty : Medium
// Time Complexity : O(n log(max(nums)))
// Space Complexity : O(1)


class Solution {
public:
    int isDiv(vector<int>& nums,int m){
        int d = 0;
        for(auto n : nums){
            d += ceil((double)(n) / (double)(m));
        }
        return d;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        if(nums.size() > threshold) return -1;
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(isDiv(nums,mid) <= threshold) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};