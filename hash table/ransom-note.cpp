// Problem: Ransom Note (Leetcode #383)
// Link: https://leetcode.com/problems/ransom-note/
// Difficulty: Easy



class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m;
        for(auto i : magazine){
            m[i]++;
        }
        for(auto i : ransomNote){
            if(m.find(i) == m.end()) return false;
            else if(m.find(i) != m.end() && m[i] == 0) return false;
            else m[i]--;
        }
        return true;
    }
};