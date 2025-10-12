// Problem: Find Words Containing a Character (LeetCode #2942)
// URL: https://leetcode.com/problems/find-words-that-can-be-formed-by-characters
// Difficulty: Easy



class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        for(int i = 0; i < words.size(); i++){
            for(auto c : words[i]){
                if(c == x) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};