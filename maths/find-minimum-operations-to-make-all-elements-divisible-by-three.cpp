// Problem : Find Minimum Operations to Make All Elements Divisible by Three (Leetcode #3190)
// Link : https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/
// Difficulty : Easy


class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        for(int num : nums) {
            if(num % 3 != 0) ans++;
        }
        return ans;
    }
};