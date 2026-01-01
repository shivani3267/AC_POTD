//LC: LARGEST RECTANGLE IN HISTOGRAM

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>nsl(n,-1);//next smallest left
        vector<int>nsr(n,n);//next smallest right
        stack<int>st;
        //for next smallest right
        for(int i=0;i<heights.size();i++){
            while(st.size() !=0 && heights[st.top()] >= heights[i]){
                nsr[st.top()] = i;
                st.pop();
            }
            st.push(i);
        } 
        while (!st.empty())  st.pop();

        //for next smallest left
        for(int i=heights.size()-1;i>=0;i--){
            while (!st.empty() && heights[st.top()] > heights[i]) {
                nsl[st.top()] = i;
                st.pop();
            }

            st.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans = max(ans,heights[i]*(nsr[i]-nsl[i]-1));
        }
        return ans;
    }
};