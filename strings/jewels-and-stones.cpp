// Problem: Jewels and Stones (LeetCode #771)
// Link: https://leetcode.com/problems/jewels-and-stones/
// Difficulty: Easy


class Solution {
public:
    // int numJewelsInStones(string jewels, string stones) {
    //     int cnt = 0;
    //     unordered_map<char, int> mpp;
    //     for (auto ch : stones) {
    //         mpp[ch]++;
    //     }
    //     for (auto ch : jewels) {
    //         if (mpp.find(ch) != mpp.end()) {
    //             cnt += mpp[ch];
    //         }
    //     }
    //     return cnt;
    // }

    int numJewelsInStones(string jewels, string stones) {
    int num = 0;
    for (int i = 0; i < jewels.size(); i++){
        num += count(stones.begin(), stones.end(), jewels[i]);
    }
    return num;
}
};