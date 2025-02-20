class Solution {
public:
    // Unordered maps to keep track of the positions
    unordered_map<int, bool> rowCheck;
    unordered_map<int, bool> lowerDiagonalCheck;
    unordered_map<int, bool> upperDiagonalCheck;

    // Function to store the board configuration in the answer
    void storeSolution(vector<vector<string>>& ans, vector<vector<char>>& board , int n) {
        vector<string> tempAns;
        for (int i = 0; i < n; i++) {
            string output = "";
            for (int j = 0; j < n; j++) {
                output.push_back(board[i][j]);
            }
            // Convert each row of the board to a string and add to tempAns
            tempAns.push_back(output);
        }
        // Add the current board configuration to the answer
        ans.push_back(tempAns);
    }

    // Function to check if placing a queen at (row, col) is safe
    bool isSafe(int row, int col, vector<vector<char>>& board) {
        // Check if the row already has a queen
        if (rowCheck[row] == true) {
            return false;
        }
        // Check if the upper diagonal already has a queen
        if (upperDiagonalCheck[row - col] == true) {
            return false;
        }
        // Check if the lower diagonal already has a queen
        if (lowerDiagonalCheck[row + col] == true) {
            return false;
        }
        // It's safe to place the queen
        return true;
    }

    // Recursive function to solve the N-Queens problem
    void solve(int n, vector<vector<char>>& board, vector<vector<string>>& ans, int col) {
        // Base case: If all queens are placed
        if (col >= n) {
            storeSolution(ans, board, n);
            return;
        }

        // Try to place a queen in each row of the current column
        for (int row = 0; row < n; row++) {
            if (isSafe(row, col, board)) {
                // Place the queen
                board[row][col] = 'Q';
                rowCheck[row] = true;
                lowerDiagonalCheck[row + col] = true;
                upperDiagonalCheck[row - col] = true;

                // Recur to place the rest of the queens
                solve(n, board, ans, col + 1);

                // Backtrack: Remove the queen and reset the checks
                board[row][col] = '.';
                rowCheck[row] = false;
                lowerDiagonalCheck[row + col] = false;
                upperDiagonalCheck[row - col] = false;
            }
        }
    }

    // Main function to solve the N-Queens problem
    vector<vector<string>> solveNQueens(int n) {
        // Initialize the board with '.'
        vector<vector<char>> board(n, vector<char>(n, '.'));
        vector<vector<string>> ans;
        int col = 0;

        // Start solving from the first column
        solve(n, board, ans, col);
        return ans;
    }
};
