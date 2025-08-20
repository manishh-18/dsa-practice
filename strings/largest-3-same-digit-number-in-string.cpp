// Problem: Largest 3-Same-Digit Number in String (LeetCode #2264)
// Link: https://leetcode.com/problems/largest-3-same-digit-number-in-string/
// Difficulty: Easy


class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string> patterns = {"999","888","777","666","555","444","333","222","111","000"};
        for (auto p : patterns) {
            if (num.find(p) != string::npos) return p;
        }
        return "";
    }
};
