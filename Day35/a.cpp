//LEETCODE: 621. Task Scheduler

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int>pq;
        int ans=0;
        vector<int>a(26,0);
        for(int i=0;i<tasks.size();i++) a[tasks[i]-'A']++;
        for(int i=0;i<26;i++){
            if(a[i]) pq.push(a[i]);
        }

        while(!pq.empty()){
            vector<int>temp;
            int cnt=n+1;
            int tempc=0;
            while(cnt-- && !pq.empty()){
                int a=pq.top();
                pq.pop();
                if(a>1) temp.push_back(a-1);
                tempc++;
            }
            
            for(int i=0;i<temp.size();i++) pq.push(temp[i]);
            if(pq.empty()) ans += tempc; //add time for last set of tasks
            else ans += n+1;
        }
        return ans;
    }
};