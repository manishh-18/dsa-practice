// Problem: Compare Version Numbers (LeetCode #165)
// Link: https://leetcode.com/problems/compare-version-numbers/
// Difficulty: Medium



class Solution {
public:
    int conv(string s)
    {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            int num = s[i]-'0';
            ans*=10;
            ans+=num;
        }
        return ans;
    }
    vector<int> solve(string s)
    {
        s+=".";   
        int n = s.size();
        vector<int> ans;
        string str = "";
        
        
        for(int i=0;i<n;i++){
            if(s[i]=='.') 
            {
                int num = conv(str);  
                ans.push_back(num);
                str=""; 
            }
            else{
                str+=s[i];
            }
        }

        return ans;

    }
    int compareVersion(string version1, string version2) {

        vector<int> v1 = solve(version1);
        vector<int> v2 = solve(version2);

        int n = v1.size();
        int m = v2.size();

        if(n<m){
            for(int i=1;i<=(m-n);i++) v1.push_back(0); 
        }else{
            for(int i=1;i<=(n-m);i++) v2.push_back(0); 
        }
        int sz = v1.size();
        for(int i=0;i<sz;i++)
        {
            if(v1[i]>v2[i]) return 1;
            else if(v1[i]<v2[i]) return -1;
        }

        return 0;
        
    }
};