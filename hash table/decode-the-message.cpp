// Problem: Decode the Message (LeetCode #2325)
// Link: https://leetcode.com/problems/decode-the-message/
// Difficulty: Easy



class Solution {
public:
    string decodeMessage(string key, string message) {
        string ans = "";
        char t[26] = {0};
        char curr = 'a';
        for(int i = 0; i < key.size(); i++){
            if(key[i] == ' ') continue;
            if(t[key[i] - 'a'] == 0){
                t[key[i] - 'a'] = curr++;
            }
        }
        for(auto c : message){
            if(c == ' ') ans += ' ';
            else ans += t[c-'a'];
        }

        return ans;
    }
};