//LEETCODE:338 Counting Bits
class Solution {
    int countsetbit(int n){
        int cnt=0;
        for(int i=31;i>=0;i--){
           if(n & (1<<i)) cnt++;
        }
        return cnt;
    }
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);
        for(int i=0;i<=n;i++){
            ans[i] = countsetbit(i);
        }
        return ans;
    }
};