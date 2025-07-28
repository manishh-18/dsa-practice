// Problem: Remove Sub-Folders from the Filesystem (LeetCode #1233)
// Link: https://leetcode.com/problems/remove-sub-folders-from-the-filesystem/
// Difficulty: Medium



#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::vector<std::string> removeSubfolders(std::vector<std::string>& folder) {
        std::sort(folder.begin(), folder.end());
        std::vector<std::string> ans = {folder[0]};

        for (int i = 1; i < folder.size(); ++i) {
            if (folder[i].substr(0, ans.back().size() + 1) != ans.back() + "/") {
                ans.push_back(folder[i]);
            }
        }
        return ans;
    }
};