class Solution {
public:
    int majorityElement(vector<int>& nums) {
                int count = 0,ans;
        for(int n:nums){
            if(count==0) ans=n;
            count +=(ans==n)?1 : -1;
        }
        return ans;   

        
    }
};