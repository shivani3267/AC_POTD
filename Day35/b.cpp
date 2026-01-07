//LEETCODE: 2542. Maximum Subsequence Score

class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        using ll = long long;
        priority_queue<ll,vector<ll>, greater<ll> >pq;
        vector<pair<ll,ll>>a;
        for(int i=0;i<nums1.size();i++) a.push_back({nums2[i],nums1[i]});

        sort(a.rbegin(),a.rend());

        ll ksum=0;
        ll ans= LLONG_MIN;;
        for(int i=0;i<k;i++){
            ksum += a[i].second;
            pq.push(a[i].second);
        }

        ans = max(ans,ksum*a[k-1].first);
        for(int i=k;i<nums1.size();i++){
            //remove minm and add greater greedily
            ksum = ksum - pq.top() + a[i].second;
            pq.pop();
            pq.push(a[i].second);
            ans = max(ans,ksum*a[i].first);
        }
        return ans;

    }
};