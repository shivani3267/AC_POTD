//LC:567. Permutation in String

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>cnt1(26,0);
        vector<int>cnt2(26,0);
        int n=s1.size();
        int m=s2.size();
        for(int i=0;i<n;i++)cnt1[s1[i]-'a']++;

        int i=0,j=0;
        while(j<m){
            cnt2[s2[j]-'a']++;
            
            while(j-i+1 >n){
                cnt2[s2[i]-'a']--;
                i++;
            }
            if(j-i+1 == n){
                bool p=1;
                for(int k=0;k<26;k++){
                    if(cnt1[k] != cnt2[k]){
                        p=0;
                        break;
                    }
                }
                if(p)return 1;
            }
            
            j++;
        }
        return 0;
    }
};