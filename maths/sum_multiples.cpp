// Problem: Sum Multiples (LeetCode #2652)
// Link: https://leetcode.com/problems/sum-multiples/
// Difficulty: Easy


class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0;
        for(int i=3;i<=n;i++){
            if(i%3==0||i%5==0||i%7==0){
                sum=sum+i;
            }
        }
        return sum;
    }
};