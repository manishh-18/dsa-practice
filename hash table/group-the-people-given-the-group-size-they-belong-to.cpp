// Problem: Group the People Given the Group Size They Belong To (LeetCode #1282)
// Link: https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/
// Difficulty: Medium


class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>>ans;
        unordered_map<int,vector<int>>v;
        for(int i = 0; i < groupSizes.size(); i++){
            int req = groupSizes[i];
            v[req].push_back(i);
            if(v[req].size() == req){
                ans.push_back(v[req]);
                v[req].clear();
            } 
        }
        return ans;
    }
};