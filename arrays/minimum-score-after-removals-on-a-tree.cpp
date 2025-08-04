// Problem: Minimum Score After Removals on a Tree (LeetCode #2322)
// Link: https://leetcode.com/problems/minimum-score-after-removals-on-a-tree/
// Difficulty: Hard



class Solution {
public:
    int time = 0;
    int DFS(int u, int parent, const vector<vector<int>>&graph, const vector<int>& nums,
            vector<int>& xorSubTree, vector<int>& inTime, vector<int>& outTime){
        int xorVal = nums[u];
        inTime[u] = time++;
        for (int v : graph[u]){
            if (v != parent){
                xorVal ^= DFS(v, u, graph, nums, xorSubTree, inTime, outTime);
            }
        }
        outTime[u] = time;
        xorSubTree[u] = xorVal;
        return xorVal;
    }
    bool find(int u, int v, const vector<int>& inTime, const vector<int>& outTime){
        return inTime[u] <= inTime[v] && outTime[v] <= outTime[u];
    }

    int minimumScore(vector<int>& nums, vector<vector<int>>& edges) {
        int n = nums.size();
        vector<vector<int>> graph(n);
        for (const auto& edge : edges){
            int u = edge[0], v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<int> xorSubTree(n), inTime(n), outTime(n);
        int totalXor = DFS(0, -1, graph, nums, xorSubTree, inTime, outTime);

        vector<int> subTreeRoots;
        for (const auto& edge : edges){
            int u  = edge[0], v = edge[1];
            subTreeRoots.push_back(inTime[u] > inTime[v] ? u : v);
        }
        int minScore = INT_MAX;
        int m = subTreeRoots.size();
        for (int i = 0; i < m; i++){
            for (int j = i + 1; j < m; j++){
                int u = subTreeRoots[i];
                int v = subTreeRoots[j];
                int a, b, c;
                if (find(u, v, inTime, outTime)){
                    a = xorSubTree[v];
                    b = xorSubTree[u] ^ xorSubTree[v];
                    c = totalXor ^ xorSubTree[u];
                } else if (find(v, u, inTime, outTime)){
                    a = xorSubTree[u];
                    b = xorSubTree[v] ^ xorSubTree[u];
                    c = totalXor ^ xorSubTree[v];
                } else {
                    a = xorSubTree[u];
                    b = xorSubTree[v];
                    c = totalXor ^ xorSubTree[u] ^ xorSubTree[v];
                }
                int score = max({a, b, c}) - min({a, b, c});
                minScore = min(minScore, score);
            }
        }
        return minScore;
    }
};