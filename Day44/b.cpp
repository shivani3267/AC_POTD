//LEETCODE: 904. Fruit Into Baskets

class Solution {
    //max window withatmost 2 distinct characters
public:
    int totalFruit(vector<int>& fruits) {
        int ans=0;
        int i=0,j=0;
        int n=fruits.size();
        unordered_map<int,int>mp;
        while(j<n){
            mp[fruits[j]]++;
            while(i<n && mp.size()>2){
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0) mp.erase(fruits[i]);
                i++;
            }
            ans =max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};