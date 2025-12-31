//GFG: Infix to Postfix

class Solution {
    int priority(char c){
        if(c=='+' || c=='-') return 1;
        if(c=='*' || c=='/') return 2;
        if(c=='^') return 3;
        return -1;
    }
  public:
    string infixToPostfix(string& s) {
        string ans ="";
        stack<char>st;//for operator
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                ans += s[i];
            }
            else if(s[i]=='(') st.push(s[i]);
            
            else if(!st.empty() && s[i]==')'){
                while(st.top() != '('){
                    ans += st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty() && priority(s[i]) <= priority(st.top()) && s[i] != '^'){
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
