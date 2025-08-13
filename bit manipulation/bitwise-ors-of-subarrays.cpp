// Problem: Bitwise ORs of Subarrays (LeetCode #898)
// Link: https://leetcode.com/problems/bitwise-ors-of-subarrays/
// Difficulty: Medium


class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> res, cur, next;
        for (int num : arr) {
            next.clear();
            next.insert(num);
            for (int x : cur) {
                next.insert(x | num);
            }
            cur = next;
            res.insert(cur.begin(), cur.end());
        }
        return res.size();
    }
};