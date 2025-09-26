// Problem : Minimum Number of Days to Make m Bouquets (LeetCode #1482)
// Link : https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/
// Difficulty : Medium
// Time Complexity : O(n log(max(bloomDay)))
// Space Complexity : O(1)


class Solution {
public:
    int howMany(vector<int>& bloomDay, int mid, int k){
        int ans = 0;
        int temp = 0;
        for(auto i : bloomDay){
            if(i <= mid){
                temp++;
            }else{
                ans += (temp / k);
                temp = 0;
            }
        }
        ans += (temp / k);
        return ans;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m * 1ll * k * 1ll;
        if(val > bloomDay.size()) return -1;
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        while(low <= high){
            int mid = (low + high) / 2;
            int how = howMany(bloomDay , mid, k);
            if(how >= m) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};
