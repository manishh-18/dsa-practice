// Problem : Self Dividing Numbers (LeetCode 728)
// URL     : https://leetcode.com/problems/self-dividing-numbers/
// Difficulty : Easy


class Solution {
public:
    bool isDiv(int num){
        int n = num;
        while(n > 0){
            int ld = n % 10;
            if(ld == 0) return false;
            if(num % ld != 0) return false;
            n /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i = left; i <= right; i++){
            if(isDiv(i)) ans.push_back(i);
        }
        return ans;
    }
};