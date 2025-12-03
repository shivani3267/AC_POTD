// 2032. Two Out of Three
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans; //ans array
        //count to store count of values
        int cnt1[100] = {0};
        int cnt2[100] = {0};
        int cnt3[100] = {0};
        for(auto el:nums1) cnt1[el-1]++;

        for(auto el:nums2) cnt2[el-1]++;

        for(auto el:nums3) cnt3[el-1]++;

        for(int i=0;i<100;i++){
            if( (cnt1[i] && cnt2[i])  || (cnt2[i] && cnt3[i]) || (cnt3[i] && cnt1[i]))
                ans.push_back(i+1);
        }
        return ans;
    }
};