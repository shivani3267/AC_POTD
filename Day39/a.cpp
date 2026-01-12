//LEETCODE: 78.SUBSETS

class Solution {
    //TC; O(N^2);SC:2^N*N+N
void solve(vector<int>&nums,int curind,int n,vector<int>&temp,vector<vector<int>>&ans){
    if(curind==n){
        ans.push_back(temp);
        return;
    }
    solve(nums,curind+1,n,temp,ans);//nahi lenge
    temp.push_back(nums[curind]);
    solve(nums,curind+1,n,temp,ans);//lenge
    temp.pop_back();
}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(nums,0,nums.size(),temp,ans);
        return ans;
    }
};