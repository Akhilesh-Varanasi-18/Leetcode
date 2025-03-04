class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        unordered_map<int, vector<int>> d;

        for (int r = 0; r < m; ++r) {
            for (int c = 0; c < n; ++c) {
                d[r - c].push_back(grid[r][c]);
            }
        }

        for (auto& pair : d) {
            if (pair.first >= 0) {
                sort(pair.second.begin(), pair.second.end());
            } else {
                sort(pair.second.rbegin(), pair.second.rend());
            }
        }

        for (int r = 0; r < m; ++r) {
            for (int c = 0; c < n; ++c) {
                grid[r][c] = d[r - c].back();
                d[r - c].pop_back();
            }
        }

        return grid;
    }
};
