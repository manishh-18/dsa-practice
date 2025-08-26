// Problem: Count the Number of Consistent Strings (LeetCode #1684)
// Link: https://leetcode.com/problems/count-the-number-of-consistent-strings/
// Difficulty: Easy


class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int al[26] = {0};
        for(auto i : allowed){
            al[i - 'a'] = 1;
        }
        int cnt = 0;
        for(auto word : words){
            int flag = 1;
            for(auto c : word){
                if(al[c - 'a'] == 0){
                    flag = 0;
                    break;
                }
            }
            cnt += flag;
        }
        return cnt;
    }
};