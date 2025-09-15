// Problem: Reverse Pairs (LeetCode #493)
// Link: https://leetcode.com/problems/reverse-pairs/
// Difficulty: Hard


class Solution {
public:
    void merge(vector<int>& arr, int low, int mid, int high) {
        vector<int>temp;
        int i = low;
        int j = mid + 1;
        while(i <= mid && j <= high){
            if(arr[i] <= arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i <= mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j <= high){
            temp.push_back(arr[j]);
            j++;
        }
        for(int k = low; k <= high; k++){
            arr[k] = temp[k - low];
        }
    }
    int countR(vector<int>& arr, int low, int mid, int high){
        int cnt = 0;
        int j = mid + 1;
         for (int i = low; i <= mid; i++) {
            while (j <= high && (long long)arr[i] > 2LL * arr[j]) {
                j++;
            }
            cnt += (j - (mid + 1));
        }
        return cnt;
    }
    int bs(vector<int>& arr, int low, int high) {
        int cnt = 0;
        if (low >= high) return 0;
        int mid = (low + high) / 2;
        cnt += bs(arr, low, mid); // always remember to add the count which is returned by these merge sort functionss
        cnt += bs(arr, mid + 1, high);
        cnt += countR(arr, low, mid, high);
        merge(arr, low, mid, high);
        return cnt;
    }
    int reversePairs(vector<int>& nums) { 
        return bs(nums, 0, nums.size() - 1); 
    }
};