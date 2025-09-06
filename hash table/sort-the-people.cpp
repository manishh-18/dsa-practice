// Problem: Sort the People (LeetCode #2418)
// Link: https://leetcode.com/problems/sort-the-people/
// Difficulty: Easy


class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int, string> m;
        for (int i = 0; i < names.size(); i++) {
            m[heights[i]] = names[i];
        }
        sort(heights.begin(),heights.end(),greater<int>());
        for(int i = 0; i < names.size(); i++){
            names[i] = m[heights[i]];
        }
        return names;
    }
};