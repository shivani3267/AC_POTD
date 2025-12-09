//GFG: MINIMUM PLATFORMS :
class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        int n=arr.size();
        int ans=1;
        int cnt=1;
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int i=1,j=0;
        while(i<n && j<n){
            if(arr[i]<= dep[j]){
                cnt++;
                i++;
            }
            else{
                j++;
                cnt--;
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};
