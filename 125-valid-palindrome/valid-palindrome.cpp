class Solution {
public:
    bool isPalindrome(string s) {
          string word="";
        for(char str:s){
            if(isalnum(str)){
                word+=tolower(str);
            }
        }
        string rev=word;
        reverse(rev.begin(),rev.end());
        return rev==word;

        
    }
};