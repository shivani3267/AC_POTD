//LEETCODE: 1769. Minimum Number of Operations to Move All Balls to Each Box

class Solution {
public:
    vector<int> minOperations(string boxes) {
       vector<int>ans(boxes.size(),0);
       for(int i=0;i<boxes.size();i++){
            int cnt=0;
            for(int j=0;j<boxes.size();j++){
                if(i==j) continue;
                if(boxes[j]=='1') cnt += abs(j-i);
            }
            ans[i]=cnt;
       } 
       return ans;
    }
};