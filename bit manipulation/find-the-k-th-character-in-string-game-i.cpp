// Problem: Find the K-th Character in String Game I (LeetCode #3304)
// Link: https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/
// Difficulty: Easy



class Solution {
public:
    char kthCharacter(int k) {
        return 'a' + __builtin_popcount(k - 1);
    }
};