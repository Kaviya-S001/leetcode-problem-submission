class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapST;
        unordered_map<char, char> mapTS;
        for (int i = 0; i < s.size(); ++i) {
            char cs = s[i];
            char ct = t[i];
            if ((mapST.count(cs) && mapST[cs] != ct) ||
                (mapTS.count(ct) && mapTS[ct] != cs)) {
                return false;
            }
            mapST[cs] = ct;
            mapTS[ct] = cs;
        }
        return true;
    }
};