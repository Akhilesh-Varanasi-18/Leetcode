class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        queue<pair<pair<int, int>, int>> q;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        vector<vector<int>> ans(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 0) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 1;
                    ans[i][j] = 0;
                }
            }
        }

        while (!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int step_size = q.front().second;
            q.pop();

            int delR[4] = {-1, 1, 0, 0};
            int delC[4] = {0, 0, -1, 1};

            for (int i = 0; i < 4; i++) {
                int nrow = r + delR[i];
                int ncol = c + delC[i];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                    mat[nrow][ncol] == 1 && vis[nrow][ncol] == 0) {
                    vis[nrow][ncol] = 1;
                    ans[nrow][ncol] = step_size + 1;
                    q.push({{nrow, ncol}, step_size + 1});
                }
            }
        }
        return ans;
    }
};