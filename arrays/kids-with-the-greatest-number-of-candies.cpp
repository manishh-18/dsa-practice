// Problem: Kids With the Greatest Number of Candies (LeetCode #1431)
// URL: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies
// Difficulty: Easy




class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int maxi = *max_element(candies.begin(),candies.end());
        for(auto i : candies){
            if(i + extraCandies >= maxi) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};