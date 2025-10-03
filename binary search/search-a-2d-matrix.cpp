// Problem: Search a 2D Matrix (LeetCode #74)
// Link: https://leetcode.com/problems/search-a-2d-matrix/
// Difficulty: Medium



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int low = 0;
        int high = n * m - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            int el = matrix[mid / m][mid % m];
            if (el == target) return true;
            else if(el > target) high = mid - 1;
            else low = mid + 1;
        }
        return false;
    }
};