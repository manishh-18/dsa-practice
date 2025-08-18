// Problem: Find Most Frequent Vowel and Consonant (LeetCode #3541)
// Link: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/
// Difficulty: Easy


class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> vow(26, 0);
        vector<int> con(26, 0);

        for (auto ch : s) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vow[ch - 'a']++;
            } else {
                con[ch - 'a']++;
            }
        }

        int maxVow = 0;
        int maxCon = 0;

        for(int i = 0; i < 26; i++){
            maxVow = max(maxVow , vow[i]);
            maxCon = max(maxCon , con[i]);
        }

        return maxVow + maxCon;
    }
};