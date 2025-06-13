// Problem: Unique Number of Occurrences (LeetCode #1207)
// Link: https://leetcode.com/problems/unique-number-of-occurrences/
// Difficulty: Easy


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        for (auto i : arr) {
            m[i]++;
        }
        set<int> freq;
        for (auto val : m) {
            if (freq.find(val.second) != freq.end()) {
                return false;
            } else {
                freq.insert(val.second);
            }
        }
        return true;
    }
};