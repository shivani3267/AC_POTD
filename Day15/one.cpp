//LEETCODE : Reverse vowels Of String

class Solution {
    bool isVowel(char ch) {
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return true;
    } else {
        return false;
    }
}
public:
    string reverseVowels(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<=j){
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(isVowel(s[i])) j--;
            else if(isVowel(s[j])) i++;
            else {
                i++;
                j--;
            }
        }
        return s;
    }
};