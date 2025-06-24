// Problem: Remove Duplicates from Sorted Array (LeetCode #2138)
// Link: https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/
// Difficulty: Easy



class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> res;
        string st = "";
        for (auto c : s) {
            if (st.size() != k)
                st += c;
            if (st.size() == k) {
                res.emplace_back(st);
                st = "";
            }
        }
        if (st.size() != 0) {
            while (st.size() != k) {
                st += fill;
            }
            res.emplace_back(st);
        }
        return res;
    }
};