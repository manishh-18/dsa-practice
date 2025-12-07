// Problem : Ugly Number (LeetCode 263)
// URL     : https://leetcode.com/problems/ugly-number/
// Difficulty : Easy


class Solution {
public:
    bool isUgly(int n) {
        if(n <= 0) return false;
        int factors[] = {2,3,5};
        for(auto i : factors){
            while(n % i == 0) n /= i;
        }
        return n == 1;
    }
};