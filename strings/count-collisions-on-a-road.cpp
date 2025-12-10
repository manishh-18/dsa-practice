// Problem : Count collisions on a road (Leetcode`s Problem 2211)
// Link    : https://leetcode.com/problems/count-collisions-on-a-road/
// DIifficulty : Medium


class Solution {
public:
    static int countCollisions(string& D) {
        int n=D.size();
        if (n==1) return 0;
        int l=0, r=n-1;
        while (D[l]=='L') l++;
        while (l<r && D[r]=='R') r--;
        if (l>=r) return 0;
        int col=0;
        for( ; l<=r; l++){
           col+=D[l]!='S';
        }
        return col;      
    }
};