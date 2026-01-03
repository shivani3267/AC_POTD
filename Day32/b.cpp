//GFG: MIN COST TO CONNECT ROPES

class Solution {
  public:
    int minCost(vector<int>& arr) {
        int cost=0;
        priority_queue<int, vector<int>, greater<int> >pq;
        for(auto e:arr) pq.push(e);
        while(pq.size() !=1){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            cost += a+b;
            pq.push(a+b);
        }
        return cost;
    }
};