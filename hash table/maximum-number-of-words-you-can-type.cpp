// Problem: Maximum Number of Words You Can Type (LeetCode #1935)
// Link: https://leetcode.com/problems/maximum-number-of-words-you-can-type/
// Difficulty: Easy


class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int cnt = 0;
        unordered_set<char>s(brokenLetters.begin(),brokenLetters.end());
        bool correct = true;
        for(int i = 0; i < text.size(); i++){
            if(text[i] != ' '){
                if(s.find(text[i]) != s.end()){
                    correct = false;
                }
            }else{
                if(correct == true) cnt++;
                else correct = true;
            }
        }
        if(correct == true) cnt++;
        return cnt;
    }
};