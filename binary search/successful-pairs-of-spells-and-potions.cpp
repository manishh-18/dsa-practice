// Problem: Successful Pairs of Spells and Potions (LeetCode 2300)
// URL: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
// Difficulty: Medium


class Solution {
public:
    int pairs(vector<int>& potions, long long s, int num){
        int low = 0;
        int high = potions.size() - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if((long long)(potions[mid]) * (long long)(num) >= s) high = mid - 1;
            else low = mid + 1;
        }
        return potions.size() - low;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>ans;
        for(auto i : spells){
            ans.push_back(pairs(potions,success,i));
        }
        return ans;
    }
};