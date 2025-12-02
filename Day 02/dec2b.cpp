class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>v;
        int sum=0;
        for(auto el:operations){
            if(el=="C") v.pop_back();
            else if(el=="D")v.push_back(v.back()*2);
            else if(el == "+"){
                int n=v.size();
                v.push_back((v[n-1]+v[n-2]));
            } 
            else v.push_back(stoi(el));
        }
        for(auto el:v) sum += el;
        return sum;
    }
};