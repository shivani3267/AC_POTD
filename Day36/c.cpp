//GFG:Unique Number II

class Solution {
  public:
    vector<int> singleNum(vector<int>& nums) {
        int txor=0;
        for(auto e:nums) txor ^= e;
        //find first different bit(first rightmostmost set bit to differnetiate)
        int cnt=0;
        while((txor&1) !=1) {
            txor= txor>>1;
            cnt++;
        }
        int mask = 1<<cnt;
        int agroup=0,bgroup=0;
        for(int i=0;i<nums.size();i++){
            if(mask&nums[i]) agroup ^= nums[i];
            else bgroup ^= nums[i];
        }
        if(agroup>bgroup) return {bgroup,agroup};
        return {agroup,bgroup};
    }
};