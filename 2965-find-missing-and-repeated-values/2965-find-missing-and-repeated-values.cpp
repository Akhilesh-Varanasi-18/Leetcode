class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> freq;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid.size(); ++j) {
                freq[grid[i][j]]++;
            }
        }
        int repeat = 0, miss = 0, n = grid.size() * grid.size();
        for (int i = 1; i <= n; ++i) {
            if (freq[i] == 2)
                repeat = i;
            if (freq[i] == 0)
                miss = i;
        }
        return {repeat, miss};
    }
};