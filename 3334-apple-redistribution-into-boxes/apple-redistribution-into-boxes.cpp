class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int applecount=0;
        int count=0;
        for( auto i:apple)
        {
            applecount += i;
        }
        sort(capacity.begin(),capacity.end(),[](int a, int b){return a>b ;});
        int box = 0;
        for(auto i : capacity)
        {
            if(box < applecount)
            {
                box = box + i;
                count++;
            }
            else
            {
                break;
            }
        }
        return count;
        
    }
};