//GFG: REVERSE STRING USING STACK

class Solution {
  public:
    string reverse(const string& s) {
        stack<char>st;
        for(auto c:s)st.push(c);
        string ans;
        while(st.size()!=0){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};