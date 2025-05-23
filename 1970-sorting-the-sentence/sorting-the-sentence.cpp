class Solution {
public:
    string sortSentence(string s) {
        vector<string> v;
        string temp;
        string res;
        for(char i : s)
        {
            if(i == ' ')
            {
                v.push_back(temp);
                temp = "";
            }
            else
            {
                temp += i;
            }
        }
        v.push_back(temp);
        sort(v.begin(),v.end(),[] (string a ,string b) { return a.back()  <b.back();});
        for( int i = 0;i < v.size();i++)
        {
            v[i] . pop_back();
            res += v[i];
            if(i != v.size() -1) res +=" ";
        }
        return res;
    }
};