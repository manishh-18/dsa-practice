// Problem: Count Elements with Maximum Frequency (LeetCode #3005)
// Link: https://leetcode.com/problems/count-elements-with-maximum-frequency/
// Difficulty: Easy



class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int arr[101] = {0};
        int ans = 0;
        for(auto i : nums){
            arr[i]++;
        }
        int maxFreq = 0;
        for(int i = 0; i < 101; i++) {
            maxFreq = max(maxFreq, arr[i]);
        }
        for(int i = 1; i < 101; i++){
            if(arr[i] == maxFreq) ans += maxFreq;
        }
        return ans;
    }
};