// Problem : Concatenate Non-Zero Digits and Multiply by Sum (Leetcode #3754)
// Link : https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum/
// Difficulty : Easy

class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string n_str = "";

        for(auto c : s){
            if(c != '0'){
                n_str += c;
            }
        }
        long long x = n_str.empty() ? 0 : stoll(n_str);

        long long sum = 0;
        for(auto c : n_str){
            sum += c - '0';
        }
        return x * sum;
    }
};