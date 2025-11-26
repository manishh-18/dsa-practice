// Problem : Can make arthmetic progression from sequence (Leetcode #1502)
// Link : https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/
// Difficulty : Easy


class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int diff = arr[1] - arr[0];
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] - arr[i - 1] != diff) return false;
        }
        return true;
    }
};