class Solution {
public:
    bool check(int i, int j, vector<vector<int>>& board, int current) {
        int n = board.size();
        int m = board[0].size();
        vector<int> dirX = {0, 1, 1, 1, 0, -1, -1, -1};
        vector<int> dirY = {1, 1, 0, -1, -1, -1, 0, 1};

        int zeroes = 0;
        int ones = 0;

        for (int k = 0; k < 8; k++) {
            int x = i + dirX[k];
            int y = j + dirY[k];

            if (x >= n || x < 0 || y < 0 || y >= m) {
                continue;
            }

            if (board[x][y] == 0 || board[x][y] == 2) {
                zeroes++;
            } else {
                ones++;
            }
        }

        if (current == 1) {
            if (ones < 2 || ones > 3) {
                return true;            }
            return false;
        } else if (current == 0) {
            if (ones == 3) {
                return true;
            }
            return false;
        }
        return false;
    }
    void gameOfLife(vector<vector<int>>& board) {

        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (check(i, j, board, board[i][j])) {
                    if (board[i][j] == 0) {
                        board[i][j] = 2;
                    } else if (board[i][j] == 1) {
                        board[i][j] = 3;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 2) {
                    board[i][j] = 1;
                } else if (board[i][j] == 3) {
                    board[i][j] = 0;
                }
            }
        }
    }
};