// Problem: Reschedule Meetings for Maximum Free Time I (LeetCode #3439)
// Link: https://leetcode.com/problems/reschedule-meetings-for-maximum-free-time-i/
// Difficulty: Medium


class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime,
                    vector<int>& endTime) {
        int n = startTime.size();
        vector<int> g(1, startTime[0]);
        for (int i = 1; i < n; i++) {
            g.push_back(startTime[i] - endTime[i - 1]);
        }
        g.push_back(eventTime - endTime.back());

        int maxi = 0, currSum = 0;

        for (int i = 0; i < g.size(); i++) {
            currSum += g[i] - ((i >= k + 1) ? g[i - (k + 1)] : 0);
            maxi = max(maxi,currSum);
        }
        return maxi;
    }
};