// Problem: To Lower Case (LeetCode #709)
// Link: https://leetcode.com/problems/to-lower-case/
// Difficulty: Easy


class Solution {
public:
    string toLowerCase(string s) {
        for( int i=0; i<s.size(); i++){
            s[i]=tolower(s[i]);
        }
        return s;
    }
};