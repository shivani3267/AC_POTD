//LEETCODE: 151. Reverse Words in a String

class Solution {
public:
    string reverseWords(string s) {
        vector<string>a;
        string ans="";
        for(int i=0;i<s.size();i++){
            string temp="";
            while(i<s.size() && s[i] != ' '){
                temp+=s[i];
                i++;
            }
            if(temp!="") a.push_back(temp);
        }
        reverse(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            ans+=a[i];
            if(i!=a.size()-1) ans+=" ";
        }
        return ans;
    }
};