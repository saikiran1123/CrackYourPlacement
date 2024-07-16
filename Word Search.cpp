class Solution {
public:
    void press(vector<vector<char>>& board, string word,
               vector<vector<int>>& visit, int n, int m, int x, int y,
               bool& flag) {
        if (word.length() == 0) {
            flag = true;
            return;
        }
        if (x + 1 < n && board[x + 1][y] == word[0] && visit[x + 1][y] != 1) {
            visit[x][y] = 1;
            press(board, word.substr(1), visit, n, m, x + 1, y, flag);
            visit[x][y] = 0;
        }
        if (y - 1 >= 0 && board[x][y - 1] == word[0] && visit[x][y - 1] != 1) {
            visit[x][y] = 1;
            press(board, word.substr(1), visit, n, m, x, y - 1, flag);
            visit[x][y] = 0;
        }
        if (y + 1 < m && board[x][y + 1] == word[0] && visit[x][y + 1] != 1) {
            visit[x][y] = 1;
            press(board, word.substr(1), visit, n, m, x, y + 1, flag);
            visit[x][y] = 0;
        }
        if (x - 1 >= 0 && board[x - 1][y] == word[0] && visit[x - 1][y] != 1) {
            visit[x][y] = 1;
            press(board, word.substr(1), visit, n, m, x - 1, y, flag);
            visit[x][y] = 0;
        }
    }
    bool exist(vector<vector<char>>& board, string word) {
        bool flag = false;
        string kir = word;
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>> visit(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == word[0]) {
                    press(board, kir.substr(1), visit, n, m, i, j, flag);
                    if (flag == true)
                        break;
                }
            }
            if (flag == true)
                break;
        }
        return flag;
    }
};