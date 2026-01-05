//LEETCODE:2593. Find Score of an Array After Marking All Elements
class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long ans=0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> >pq;
        for(int i=0;i<nums.size();i++) pq.push({nums[i],i});
        while(!pq.empty()){
            int ind = pq.top().second;
            pq.pop();
            if(nums[ind] != -1) ans += nums[ind];
            else continue;
            nums[ind]=-1;
            if((ind+1) < nums.size()) nums[ind+1]=-1;
            if((ind-1)>=0) nums[ind-1]=-1;
        }
        return ans;
    }
};