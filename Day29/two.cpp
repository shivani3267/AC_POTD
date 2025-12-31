//GFG:Postfix Evaluation

class Solution {
  public:
    int evaluatePostfix(vector<string>& tokens) {
        int n =tokens.size();
        int ans =0;
        stack<int>st;
        for(int i=0;i<n;i++){
            if(st.empty()) st.push(stoi(tokens[i]));
            else{
                if(tokens[i]=="+" ||tokens[i]=="-"|| tokens[i]=="*"||tokens[i]=="/" || 
                tokens[i]=="^"){
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    int res=0;
                    if(tokens[i] == "+") res = a+b;
                    else if(tokens[i]== "-") res = b-a;
                    else if(tokens[i] == "*") res = a*b;
                    else if(tokens[i] == "^") res = pow(b,a);
                    else res = floor((float)b/a);
                    st.push(res);
                }
                else st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};