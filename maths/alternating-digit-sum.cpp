// Problem: Alternating digit sum (Leetcode #2544)
// Link: https://leetcode.com/problems/alternating-digit-sum/
// Difficulty: Easy


class Solution {
public:
    int alternateDigitSum(int n) {
        int ans = 0;
        bool pos = true;
        string s = to_string(n);
        for(int i = 0; i < s.size(); i++){
            if(pos){
                ans += (s[i] - '0');
                pos = false;
            } 
            else{
                ans -= (s[i] - '0');
                pos = true;
            }
        }
        return ans;
    }
};