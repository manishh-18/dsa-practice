// Problem: Find Closest Person (LeetCode #3516)
// Link: https://leetcode.com/problems/find-closest-person/
// Difficulty: Easy


class Solution {
public:
    int findClosest(int x, int y, int z) {
        return abs(x-z)==abs(y-z)?0:abs(x-z)<abs(y-z)?1:2;
    }
};