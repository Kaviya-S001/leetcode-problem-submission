class Solution {
public:
    int balancedStringSplit(string s) {
        int countR = 0, countL = 0, count = 0;
        for(int i=0; i<s.length(); i++) {
            if(s[i] == 'R') countR++;
            else countL++;

            if(countR == countL) count++;
        }
        return count;
        
    }
};