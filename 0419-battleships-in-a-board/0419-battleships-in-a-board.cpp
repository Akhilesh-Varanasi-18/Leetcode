class Solution {
public:
    bool clear(int i, int j, vector<vector<char>>& board) {
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size()) {
            return false;
        }
        if (board[i][j] == 'X') {
            board[i][j] = '.';
            if (clear(i + 1, j, board)) {
                return true;
            } else if (clear(i - 1, j, board)) {
                return true;
            } else if (clear(i, j + 1, board)) {
                return true;
            } else if (clear(i, j - 1, board)) {
                return true;
            } else {
                return false;
            }
        }
        return false;
    }
    int countBattleships(vector<vector<char>>& board) {
        int count = 0;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == 'X') {
                    clear(i, j, board);
                    count++;
                }
            }
        }
        return count;
    }
};