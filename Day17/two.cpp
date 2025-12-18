//LEETCODE :49
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        vector<vector<string>>ans;
        int n=s.size();
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<n;i++){
            string temp = s[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(s[i]);
        }
        for(auto it=mp.begin();it != mp.end();it++){
            ans.push_back(it->second);
        }
        return ans;
        
    }
};