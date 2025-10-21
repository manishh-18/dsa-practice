// Problem: Restore Finishing Order (LeetCode #3668)
// Contest: Codeforces - Codeforces Round #713 (Div. 3)
// URL: https://codeforces.com/contest/1512/problem/F
// Memory Limit: 256 MB


class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> friendSet(friends.begin(), friends.end());
        vector<int> result;

        for (int num : order) {
            if (friendSet.count(num)) {
                result.push_back(num);
            }
        }

        return result;
    }
};