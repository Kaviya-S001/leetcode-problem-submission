class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
          if (matrix.empty()) return {};

        vector<vector<int>> ans(matrix[0].size(), vector<int>(matrix.size()));

        for (int i = 0; i < matrix.size(); ++i)
            for (int j = 0; j < matrix[0].size(); ++j)
                ans[j][i] = matrix[i][j];

        return ans;
        
    }
};