class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> row(m);
        vector<int> col(n);

        for (int i = 0; i < indices.size(); i++) {
            row[indices[i][0]]++;
            col[indices[i][1]]++;
        }

        int oddrow = 0, evenrow = 0, oddcol = 0, evencol = 0;

        for (int i = 0; i < m; i++)
            if (row[i] % 2)
                oddrow++;
            else
                evenrow++;

        for (int i = 0; i < n; i++)
            if (col[i] % 2)
                oddcol++;
            else
                evencol++;

        return oddrow * evencol + evenrow * oddcol;
    }
};