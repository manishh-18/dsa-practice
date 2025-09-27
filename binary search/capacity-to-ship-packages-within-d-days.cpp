// Problem : Capacity To Ship Packages Within D Days (LeetCode #1011)
// Link : https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
// Difficulty : Medium
// Time Complexity : O(n log(sum(weights)))
// Space Complexity : O(1)



class Solution {
public:
    int mdays(vector<int>& weights, int mid){
        int days = 1;
        int curr = 0;
        for(auto i : weights){
            curr += i;
            if(curr > mid){
                days++;
                curr = i;
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(mdays(weights,mid) <= days){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};