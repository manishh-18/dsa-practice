// Problem: Pascal's Triangle (LeetCode #118)
// Link: https://leetcode.com/problems/pascals-triangle/
// Difficulty: Easy



class Solution {
public:
    vector<int> generateRow(int row) {
        long long ans = 1;
        vector<int> rowAns;
        rowAns.push_back(1);
        for (int col = 1; col < row; col++) {
            ans = ans * (row - col);
            ans = ans / col;
            rowAns.push_back(ans);
        }
        return rowAns;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int row = 1; row <= numRows; row++) {
            ans.push_back(generateRow(row));
        }
        return ans;
    }
};