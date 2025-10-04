// Problem: Search a 2D Matrix II (LeetCode #240)
// Link: https://leetcode.com/problems/search-a-2d-matrix-ii/
// Difficulty: Medium




class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        // better
        for(int i = 0; i < n; i++){
            if(matrix[i][0] <= target && matrix[i][m-1] >= target){
                int low = 0;
                int high = m - 1;
                while(low <= high){
                    int mid = (low + high) / 2;
                    if(matrix[i][mid] == target) return true;
                    else if(matrix[i][mid] < target) low = mid + 1;
                    else high = mid - 1;
                }
            }
        }
        return false;


        // optimal
        int n = 0;
        int m = matrix[0].size() - 1;
        while(m >= 0 && n < matrix.size()){
            int start = matrix[n][m];
            if(start == target) return true;
            else if(start > target) m--;
            else n++;
        }
        return false;
    }
};