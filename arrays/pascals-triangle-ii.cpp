// Problem: Pascal's Triangle II (LeetCode #119)
// Link: https://leetcode.com/problems/pascals-triangle-ii/
// Difficulty: Easy


class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        long long r = 1;
        ans.emplace_back(1);
        for(int i = 0; i < rowIndex; i++){
            r *= (rowIndex - i);
            r /= i+1;
            ans.emplace_back(r);
        }

        return ans;
    }
};