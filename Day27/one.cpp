//GFG: NEXT GREATER ELEMENT

class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n,-1);
        stack<int>st;//stores index
        for(int i=0;i<n;i++){
            while(st.size() > 0 && arr[st.top()] < arr[i]){
                ans[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};