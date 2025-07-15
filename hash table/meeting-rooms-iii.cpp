// Problem: Meeting Rooms III (LeetCode #2402)
// Link: https://leetcode.com/problems/meeting-rooms-iii/
// Difficulty: Medium



class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        int m = meetings.size();

        sort(meetings.begin(), meetings.end());

        vector<int> roomUsed(n, 0);
        vector<long long> lastAvl(n, 0);

        for (auto& meeting : meetings) {
            int start = meeting[0];
            int end = meeting[1];
            bool found = false;

            long long EarlyEndRoomTime = LLONG_MAX;
            int EarlyEndRoom = 0;

            for (int i = 0; i < n; i++) {
                if(lastAvl[i] <= start){
                    found = true;
                    roomUsed[i]++;
                    lastAvl[i] = end;
                    break;
                }
                if(lastAvl[i] < EarlyEndRoomTime) {
                    EarlyEndRoom = i;
                    EarlyEndRoomTime = lastAvl[i];
                }
            }
            if(!found){
                lastAvl[EarlyEndRoom] += (end - start);
                roomUsed[EarlyEndRoom]++;
            }

        }
        
        int resultRoom = -1;
        int maxUse     = 0;  
        for(int room = 0; room < n; room++) {
            if(roomUsed[room] > maxUse) {
                maxUse = roomUsed[room];
                resultRoom = room;
            }
        }

        return resultRoom;
    }
};