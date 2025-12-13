// Problem : Complete prime number (Leetcode #3765)
// Link : https://leetcode.com/problems/complete-prime-number/
// Difficulty : Medium




class Solution {
public:
    bool isPrime(int n){
        if(n <= 1) return false;
        if(n <= 3) return true;
        if(n % 2 == 0) return false;
        for(int i = 3; i * i <= n; i+=2){
            if(n % i == 0) return false;
        }
        return true;
    }
    bool completePrime(int num) {
        string s = to_string(num);
        int n = s.size();
        for(int i = 1; i <= n; i++){
            int pre = stoi(s.substr(0,i));
            if(!isPrime(pre)) return false;
        }
        for(int i = 0; i < n; i++){
            int suf = stoi(s.substr(i,n-i));
            if(!isPrime(suf)) return false;
        }
        return true;
    }
};