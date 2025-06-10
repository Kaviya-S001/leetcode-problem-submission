class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        vector<bool> present(n + 1, false);
        for (int num : nums) {
            present[num] = true;
        }
        for (int i = 1; i <= n; ++i) {
            if (!present[i]) {
                result.push_back(i);
            }
        }
        return result;
    }
};