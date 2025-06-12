class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int firstPositive =
            lower_bound(nums.begin(), nums.end(), 1) - nums.begin();
        int firstZero = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
        int negativeCount = firstZero;
        int positiveCount = n - firstPositive;
        return max(negativeCount, positiveCount);
    }
};