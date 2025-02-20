class Solution {
public:
    // Queen ke positions track karne ke liye unordered maps
    unordered_map<int, bool> rowCheck;
    unordered_map<int, bool> lowerDiagonalCheck;
    unordered_map<int, bool> upperDiagonalCheck;

    // Answer me board configuration ko store karne ka function
    void storeSolution(vector<vector<string>>& ans, vector<vector<char>>& board , int n) {
        vector<string> tempAns;
        for (int i = 0; i < n; i++) {
            string output = "";
            for (int j = 0; j < n; j++) {
                output.push_back(board[i][j]);
            }
            // Board ke har row ko string me convert karke tempAns me add karenge
            tempAns.push_back(output);
        }
        // Current board configuration ko answer me add karenge
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
        // Queen place karna safe hai
        return true;
    }

    // Recursive function to solve the N-Queens problem
    void solve(int n, vector<vector<char>>& board, vector<vector<string>>& ans, int col) {
        // Base case: Agar saari queens place ho gayi, to solution store karke return karo
        if (col >= n) {
            storeSolution(ans, board, n);
            return;
        }

        // Current column ke har row me queen place karne ki koshish karenge
        for (int row = 0; row < n; row++) {
            if (isSafe(row, col, board)) {
                // Queen ko place karenge
                board[row][col] = 'Q';
                rowCheck[row] = true;
                lowerDiagonalCheck[row + col] = true;
                upperDiagonalCheck[row - col] = true;

                // Baaki queens place karne ke liye recur karenge
                solve(n, board, ans, col + 1);

                // Backtrack: Queen ko remove karenge aur checks reset karenge
                board[row][col] = '.';
                rowCheck[row] = false;
                lowerDiagonalCheck[row + col] = false;
                upperDiagonalCheck[row - col] = false;
            }
        }
    }

    // N-Queens problem solve karne ka main function
    vector<vector<string>> solveNQueens(int n) {
        // Board ko '.' se initialize karenge
        vector<vector<char>> board(n, vector<char>(n, '.'));
        vector<vector<string>> ans;
        int col = 0;

        // Pehle column se solve karna start karenge
        solve(n, board, ans, col);
        return ans;
    }
};
