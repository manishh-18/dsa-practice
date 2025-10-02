// Problem: Find Smallest Letter Greater Than Target (LeetCode #744)
// Link: https://leetcode.com/problems/find-smallest-letter-greater-than-target/
// Difficulty: Easy




class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = letters[0];
        int low = 0;
        int high = letters.size() - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(letters[mid] > target) {
                ans = letters[mid];
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};