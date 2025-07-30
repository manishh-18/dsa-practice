// Problem: Delete Characters to Make Fancy String (LeetCode #1957)
// Link: https://leetcode.com/problems/delete-characters-to-make-fancy-string/
// Difficulty: Easy



class Solution {
public:
    string makeFancyString(string s) {
        vector<char> chars(s.begin(), s.end());
        char last = chars[0];
        int count = 1;
        int pos = 1;

        for (int i = 1; i < chars.size(); ++i) {
            if (chars[i] != last) {
                last = chars[i];
                count = 0;
            }

            if (++count > 2) continue;

            chars[pos++] = chars[i];
        }

        return string(chars.begin(), chars.begin() + pos);
    }
};