// Problem: Finding Pairs With a Certain Sum (LeetCode #1865)
// Link: https://leetcode.com/problems/finding-pairs-with-a-certain-sum/
// Difficulty: Medium 


class FindSumPairs {
public:
    vector<int> n1,n2;
    unordered_map<int,int>mpp;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
            n1 = nums1;
            n2 = nums2;
            for(auto i:n2){
                mpp[i]++;
            
        }
    }
    
    void add(int index, int val) {
        mpp[n2[index]]--;
        n2[index]+=val;
        mpp[n2[index]]++;
    }
    
    int count(int tot) {
        int count = 0;
        for(int i=0;i<n1.size();i++){
                count+=mpp[tot-n1[i]];
        }
        return count;
    }
};
