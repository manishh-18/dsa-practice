// Problem: Count Asterisks (LeetCode 2315)
// Link: https://leetcode.com/problems/count-asterisks/
// Difficulty: Easy


class Solution {
public:
    int countAsterisks(string s) {
        int length = s.length();
        int count = 0;      // to count asterisks outside bars
        int counter = 0;    // to count occurrences of '|'
        
        for (int i = 0; i < length; i++) {
            if (s[i] == '|') {
                // Toggle state on encountering '|'
                counter++;
            } 
            else if (s[i] == '*' && counter % 2 == 0) {
                // Count '*' only if outside bars (even count of '|')
                count++;
            }
        }
        
        return count;
    }
};