// Problem: Reverse String (LeetCode #344)
// Link: https://leetcode.com/problems/reverse-string/
// Difficulty: Easy


class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }
};