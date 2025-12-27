//LEETCODE:20 VALID PARENTHESES

class Solution {
public:
    bool isValid(string s) {
      stack<char>st;
      for(auto el:s){
        if(st.size()==0) st.push(el);
        else if(el == '{' || el == '[' || el == '(') st.push(el);
        else{
            if(el == '}' && st.top() != '{') return 0;
            else if(el == ']' && st.top() != '[') return 0;
            else if(el == ')' && st.top() != '(') return 0;
            else st.pop();
        }

      }  
      return !st.size();
    }
};