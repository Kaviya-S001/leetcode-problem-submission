class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
          vector<int> result;
        int m = grid.size(), n = grid[0].size();
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int col = (i % 2 == 0) ? j : (n - 1 - j);
                if ((i + col) % 2 == 0) {
                    result.push_back(grid[i][col]);
                }
            }
        }
        
        return result;
        
    }
};