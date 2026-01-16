//LEETCODE:165.Compare Version Numbers

class Solution {
public:
    int compareVersion(string v1, string v2) {
        int m=v1.size(),n=v2.size();
        int i=0,j=0;
        while(i<m || j<n){
            long long temp1=0;
            while(i<m && v1[i] != '.'){
                temp1 = temp1*10 + v1[i] - '0';
                i++;
            }
            long long temp2=0;
            while(j<n && v2[j] != '.'){
                temp2 = temp2*10 + v2[j] - '0';
                j++;
            }
            if(temp1<temp2) return -1;
            if(temp2<temp1) return 1;
            i++;
            j++;
        }
        return 0;
        
    }
};