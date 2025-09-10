// Problem: Count of Matches in Tournament (LeetCode #1688)
// Link: https://leetcode.com/problems/count-of-matches-in-tournament/
// Difficulty: Easy



class Solution {
public:
    int numberOfMatches(int n) {
        int cnt = 0;
        while (n > 1) {
            if (n % 2 == 0) {
                n /= 2;
                cnt += n;
            } else {
                cnt += (n - 1) / 2;
                n = (n - 1) / 2 + 1;
            }
        }
        return cnt;
    }
};