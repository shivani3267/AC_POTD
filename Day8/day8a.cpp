/*Leetcode 53. Maximum Subarray*/
//kadanes algo
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // kadane's algo
        int pre=0;
        int ans=INT_MIN;
        for(auto e:nums){
            pre += e;
            ans=max(ans,pre);
            if(pre<0) pre=0;
        }
        return ans;
    }
};