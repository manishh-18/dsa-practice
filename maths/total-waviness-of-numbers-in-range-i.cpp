// Problem : Total waviness of numbers in range I (Leetcode #3751)
// Link : https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/
// Difficulty : MEdium 




class Solution {
public:
    int waviness(int n){
        string s = to_string(n);
        int len = s.size();
        if(len < 3) return 0;
        int count = 0;
        for(int i = 1; i < len - 1; i++){
            int p = s[i - 1] - '0';
            int c = s[i] - '0';
            int nxt = s[i + 1] - '0';
            if((c > p && c > nxt) || (c < p && c < nxt)) count++;
        }
        return count;
    }
    int totalWaviness(int num1, int num2) {
        int total = 0;
        for(int i = num1; i <= num2; i++){
            total += waviness(i);
        }
        return total;
    }
};