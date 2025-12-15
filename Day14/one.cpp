/*LEETCODE: 2022. Convert 1D Array Into 2D Array*/
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int s=original.size();
        if(s!=m*n) return {};
        vector<vector<int>> ans(m);
        int k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i].push_back(original[k]);
                k++;
            }
        }
        return ans;
    }
};