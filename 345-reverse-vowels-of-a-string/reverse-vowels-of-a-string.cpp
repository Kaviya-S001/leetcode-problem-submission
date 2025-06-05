class Solution {
public:
    string reverseVowels(string s) {
        int f=0,b=s.size()-1;
        string vowel ="aeiouAEIOU";
        while(f<b){
            while(f<b && vowel.find(s[f])==string::npos)f++;
            while(f<b && vowel.find(s[b])==string::npos)b--;
        
        if(f<b){
            swap(s[f],s[b]);
            f++;
            b--;
        }
        }
        return s;

        
    }
};