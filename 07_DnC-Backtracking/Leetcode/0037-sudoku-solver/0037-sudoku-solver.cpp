class Solution {
public:
    bool isSafe(char digit, int row, int col, vector<vector<char>>& board) {
        // 3 rule

        // rowCheck
        int n = board.size();
        for (int k = 0; k < n; k++) {
            if (board[row][k] == digit) {
                // same digit pehle se same row me exist krta h
                return false;
            }
        }

        // colCheck
        for (int k = 0; k < n; k++) {
            if (board[k][col] == digit) {
                // same col me same digit pehle se exist krta h
                return false;
            }
        }

        // 3*3 Sub-box Check
        for (int k = 0; k < n; k++) {
            if (board[3 * (row / 3) + k / 3][3 * (col / 3) + k % 3] == digit) {
                // same 3*3 k box me same digit exist krta h
                return false;
            }
        }

        // agar teeno rules badia follow ho rahe h toh kya krna h
        return true;
    }

    bool solve(vector<vector<char>>& board) {
        // Base case - ?

        // 1 case me solve karunga , baaki recursion dekh lega
        // sabse pehle find the empty cell
        // empty -> '.'

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                // main i,j wali cell pr aagya
                // pr pata kaise lagega data fill karu ya nahi
                // sirf empty cell pr fill krenge

                if (board[i][j] == '.') {
                    // fill this cell, coz its empty
                    // empty cell pr mujhe 1-> 9 tk digit hit and trial krna hai
                    for (char digit = '1'; digit <= '9'; digit++) {
                        // konsa digit rakh skta hu, ye kaise pta lagega
                        // mujhe bs check krna h k konsa digit rakhna safe hai
                        if (isSafe(digit, i, j, board) == true) {
                            // agar rakhna safe hai
                            board[i][j] = digit;
                            // baaki kon sambhalega -> recursion
                            bool aageSolveHoPaya = solve(board);
                            if (aageSolveHoPaya == true) {
                                return true;
                            } else {
                                // ye vo case h jaha tumne ek digit place krdi
                                // but recursion se age ka answer false aa gaya
                                // age board solve nahi ho paya
                                // backtrack -> shayad maine glt digit rakh dia
                                board[i][j] = '.';
                            }
                        }
                    }
                    // agar aap yaha tak ay ho
                    // iska matlab ye h ki 1-> 9 tk koi bhi digit yaha pr fit
                    // nahi ho raha pichle kahi pr galti kari h
                    return false;
                }
            }
        }
        // yaha tak ay iska matlab
        // board completely fill ho gaya h \
        // answer aa chuka
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
