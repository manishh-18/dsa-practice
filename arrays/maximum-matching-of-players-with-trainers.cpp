// Problem: Maximum Matching of Players With Trainers (LeetCode #2410)
// Link: https://leetcode.com/problems/maximum-matching-of-players-with-trainers/
// Difficulty: Medium



class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int i = 0;
        int j = 0;
        int cnt = 0;
        while(i<players.size() && j<trainers.size()){
            if(players[i] <= trainers[j]){
                i++;
                cnt++;
            }
            j++;
        }
        return cnt;
    }
};