// Problem: Palindrome Number (LeetCode #9)
// Link: https://leetcode.com/problems/palindrome-number/
// Difficulty: Easy


class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long reverse = 0;
        long num = x;
        while(x>0){
            reverse = reverse*10 + (x%10);
            x=x/10;
        }
        if(reverse==num){
            return true;
        }
        else{
            return false;
        }
    }
};