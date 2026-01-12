//LEETCODE:1310. XOR Queries of a Subarray

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<int>ans(n,0);
        vector<int>pre;
        int k=0;
        for(int i=0;i<arr.size();i++){
            k= k^arr[i];
            pre.push_back(k);
        }
        for(int i=0;i<n;i++){
            int f = queries[i][0];
            int s=queries[i][1];
            if(f==0) ans[i]=pre[s];
            else if(f==s) ans[i]=arr[f];
            else ans[i] = pre[s] ^ pre[f-1];
        }
        return ans;
    }
};