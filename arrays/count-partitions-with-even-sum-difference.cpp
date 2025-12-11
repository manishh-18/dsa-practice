// Problem : Count partitions with even sum difference (LeetCode 3432)
// Link    : https://leetcode.com/problems/count-partitions-with-even-sum-difference/
// Difficulty : Medium

class Solution {
public:
    int countPartitions(vector<int>& A) {
        int total = accumulate(A.begin(), A.end(), 0);
        return total & 1 ? 0 : A.size() - 1;
    }
};