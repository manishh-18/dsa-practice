// Problem: Maximum Area of Longest Diagonal Rectangle (LeetCode #3000)
// Link: https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/
// Difficulty: Easy




class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxDia = 0;
        int maxArea = 0;
        for (int i = 0; i < dimensions.size(); i++) {
            int l = dimensions[i][0];
            int w = dimensions[i][1];
            int currDia = l * l + w * w;
            if (currDia > maxDia || (currDia == maxDia && l * w > maxArea)) {
                maxDia = currDia;
                maxArea = l * w;
            }
        }

        return maxArea;
    }
};