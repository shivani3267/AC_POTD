//LEETCODE: TAKE GIFTS FROM THE RICHEST PILES
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans = 0;
        priority_queue<int>pq;
        for(auto g:gifts)pq.push(g);
        while(pq.size()!=0 && k--){
            int a = pq.top();
            pq.pop();
            pq.push(sqrt(a));
        }
        while(pq.size()>0){
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};