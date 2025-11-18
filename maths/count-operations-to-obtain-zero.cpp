// Problem: Count operations to obtain zero (Leetcode 2169)
// Link: https://leetcode.com/problems/count-operations-to-obtain-zero/
// Difficulty: Easy


class Solution {
public:
    int countOperations(int num1, int num2) {
        int cnt = 0;
        while(num1 != 0 && num2 != 0){
            if(num1 >= num2){
                num1 -= num2;
                cnt++;
            }
            else {
                num2 -= num1;
                cnt++;
            }
        }
        return cnt;

    }
};