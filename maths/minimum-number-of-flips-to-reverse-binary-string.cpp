// Problem : Minimum number of flips to reverse binary string (Leetcode #3750)
// Link : https://leetcode.com/problems/minimum-number-of-flips-to-reverse-binary-string/
// Difficulty : Easy



class Solution {
public:
    int minimumFlips(int n) {
        if(n == 0) return 0;
        string s = "";
        int temp = n;
        while(temp > 0){
            s = char('0' + (temp % 2)) + s;
            temp /= 2;
        }
        string rev = s;
        reverse(rev.begin(), rev.end());
        int flips = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != rev[i]) flips++;
        }
        return flips;
    }
};