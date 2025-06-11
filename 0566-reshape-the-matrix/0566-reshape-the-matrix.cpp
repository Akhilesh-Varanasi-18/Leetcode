class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size(), col = mat[0].size();
        if (row * col != r * c)
            return mat;
        vector<vector<int>> ans(r, vector<int>(c));
        vector<int> v;
        for (auto i : mat)
            for (auto j : i)
                v.push_back(j);
        int index = 0;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                ans[i][j] = v[index++];
        return ans;
    }
};
