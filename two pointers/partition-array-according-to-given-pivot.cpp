// Problem: Partition Array According to Given Pivot (LeetCode #2161)
// Link: https://leetcode.com/problems/partition-array-according-to-given-pivot/
// Difficulty: Medium



// class Solution {
// public:
//     vector<int> pivotArray(vector<int>& nums, int pivot) {
//         vector<int>less;
//         vector<int>greater;
//         int cnt = 0;
//         for(auto i : nums){
//             if(i < pivot) less.push_back(i);
//             else if(i > pivot) greater.push_back(i);
//             else cnt++;
//         }
//         vector<int>ans(less.begin(),less.end());
//         while(cnt--){
//             ans.push_back(pivot);
//         }
//         for(auto i : greater) ans.push_back(i);
//         return ans;
//     }
// };


class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int left=0;
        int right=nums.size()-1;
        int n=nums.size();
        vector<int> result(n,0);
        for(int i=0,j=n-1;i<n;i++,j--){
            if(nums[i] < pivot){
                result[left]=nums[i];
                left++;
            }
            if(nums[j] > pivot){
                result[right]=nums[j];
                right--;
            }
        }
        while(left <= right){
            result[left]=pivot;
            left++;
        }
        return result;
    }
};