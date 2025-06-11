class Solution {
public:
    int uniquePaths(int m, int n) {
        long long ans = 1;
    for (int i = 0; i < min(m - 1, n - 1); ++i)
        ans = ans * (m + n - 2 - i) / (i + 1);
    return (int)ans;    

    }
};