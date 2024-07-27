class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        char grid[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
        bool turnX = true;

        for (int i = 0; i < moves.size(); ++i) {
            int row = moves[i][0];
            int col = moves[i][1];
            grid[row][col] = turnX ? 'A' : 'B';
            turnX = !turnX;

            if (checkWinner(grid)) {
                return turnX ? "B" : "A";
            }
        }

        if (moves.size() == 9) {
            return "Draw";
        }

        return "Pending";
    }

private:
    bool checkWinner(char grid[3][3]) {
        for (int i = 0; i < 3; ++i) {
            if (grid[i][0] != ' ' && grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]) return true;
            if (grid[0][i] != ' ' && grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i]) return true;
        }
        
        if (grid[0][0] != ' ' && grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) return true;
        if (grid[0][2] != ' ' && grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) return true;
        
        return false;
    }
};
