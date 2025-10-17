// Problem: Sum of All Odd Length Subarrays (LeetCode #1588)
// URL: https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
// Difficulty: Easy



class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++) {
            int length=1;
            int currSum=0;
            for(int j=i;j<arr.size();j++) {
                currSum+=arr[j];
                if(length%2==1) sum+=currSum;
                length++;
            }
        }
        return sum;
    }
};