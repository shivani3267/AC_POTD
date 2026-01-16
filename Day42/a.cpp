//LC: Valid Pallindrome

class Solution {
public:
    bool isPalindrome(string s) {
       int i=0,j=s.size()-1;
       while(i <= j){
        if(isalnum(s[i]) && isalnum(s[j])){
            if(isdigit(s[i]) != isdigit(s[j]) ) return 0;
            else if(tolower(s[i]) != tolower(s[j])) return 0;
            i++;
            j--;
        }
        else if(! isalnum(s[i])) i++;
        else if(! isalnum(s[j])) j--;
        else{
            i++;
            j--;
        }
       } 
       return 1;
    }
};