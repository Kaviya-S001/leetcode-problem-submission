class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
         unordered_map<int, int> m;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            if (nums[i] % 2 == 0) {
                ++m[nums[i]];
            }
        }

        int maxi = -1, mfreq = 0;

        for (auto& p : m) {
            if (p.second > mfreq ||
                (p.second == mfreq && (maxi == -1 || p.first < maxi))) {
                maxi = p.first;
                mfreq = p.second;
            }
        }

        return maxi;

        
    }
};