// Problem: Maximum number of operations to move ones to the end (Leetcode 3228)
// Link: https://leetcode.com/problems/maximum-number-of-operations-to-move-ones-to-the-end/
// Difficulty: Medium



class Solution {
public:
    static int maxOperations(string& s) {
        int cnt=0, n=s.size(), cnt1=(s[0]=='1');
        for(int i=1; i<n; i++){
            if (s[i]=='1') cnt1++;
            else if (s[i-1]=='1') cnt+=cnt1;
        }
        return cnt;
    }
};



auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();