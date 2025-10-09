// Problem: Container With Most Water (LeetCode #11)
// URL: https://leetcode.com/problems/container-with-most-water/
// Difficulty: Medium


class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int ans = 0;
        while(i < j){
            int water = (j-i) * min(height[i],height[j]);
            ans = max(ans,water);
            if(height[i]>height[j]) j--;
            else i++;
        }
        return ans;
    }
};