// Problem: XOR Operation in an Array (LeetCode #1486)
// Link: https://leetcode.com/problems/xor-operation-in-an-array/
// Difficulty: Easy



class Solution {
public:
    int xorOperation(int n, int start) {
        int XOR=0;
        for(int i=0;i<n;i++){
            XOR = XOR^(start+2*i);
        }
        return XOR;
    }
};