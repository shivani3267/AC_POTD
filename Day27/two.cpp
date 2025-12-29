//GFG: STOCK SPAN PROBLEM

class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
         //next smaller from right side
         int n = arr.size();
         vector<int>ans(n,1);
         stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(st.size()>0 && arr[st.top()] < arr[i]){
                ans[st.top()] = st.top()-i;
                st.pop();
            }
            st.push(i);
        }
        while(st.size()!=0){
            ans[st.top()] = st.top()+1;
            st.pop();
        }
        return ans;
    }
};