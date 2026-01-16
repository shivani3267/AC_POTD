//GFG:Max Sum Subarray of size K

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int ans=0;
        int j=0;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum += arr[i];
            if(i-j+1 == k){
                ans = max(ans,sum);
                sum -= arr[j++];
            }
        }
        return ans;
    }
};