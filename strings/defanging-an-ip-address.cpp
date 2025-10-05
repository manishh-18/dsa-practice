// Problem: Defanging an IP Address (LeetCode #1108)
// Link: https://leetcode.com/problems/defanging-an-ip-address/
// Difficulty: Easy


class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";
        for(auto c : address){
            if(c == '.'){
                ans += "[.]";
            }
            else{
                ans += c;
            }
        }
        return ans;
    }
};