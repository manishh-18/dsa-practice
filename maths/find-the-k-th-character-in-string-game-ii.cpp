// Problem: Find the K-th Character in String Game II (LeetCode #3307)
// Link: https://leetcode.com/problems/find-the-k-th-character-in-string-game-ii/
// Difficulty: Hard


class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        int shift = 0 ;
        vector<long long>lengths;
        long long len = 1;
        for(auto op:operations){
            len*=2;
            lengths.push_back(len);
            if(len>k) break;
        }
        for(int i=lengths.size()-1;i>=0;i--){
            lengths[i]/=2;
            if(lengths[i]<k){
                k-=lengths[i];
                if(operations[i]==1) shift++;
            }
        }
        return char('a' + (shift%26));
    }
};