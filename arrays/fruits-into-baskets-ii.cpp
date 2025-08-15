// Problem: Fruits Into Baskets II (LeetCode #3477)
// Link: https://leetcode.com/problems/fruits-into-baskets-ii/
// Difficulty: Easy


class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int m = baskets.size();
        vector<int> v(m, 0);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++){
                if(fruits[i] <= baskets[j] && v[j] == 0){
                    v[j] = 1;
                    cnt++;
                    break;
                }
            }
        }
        return n - cnt;
    }
};