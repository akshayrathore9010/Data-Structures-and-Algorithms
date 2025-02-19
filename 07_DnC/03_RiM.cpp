class Solution {
    public:
  
    // Function to check if the move is within bounds and valid
    bool isSafe(int newx, int newy, vector<vector<int>> &mat, vector<vector<bool>> &visited, int n) {
      if (newx < 0 || newy < 0 || newx >= n || newy >= n) {
        // out of bound
        return false;
      }  
      if (visited[newx][newy] == true) {
        // already visited
        return false;
      }
      if (mat[newx][newy] == 0) {
        // blocked space
        return false;
      }
      // valid case
      return true;
    }
  
    // Recursive function to find all paths
    void solve(vector<vector<int>> &mat, vector<vector<bool>> &visited, int n, vector<string> &ans, int srcx, int srcy, int destx, int desty, string output) {
  
      // base case
      if (srcx == destx && srcy == desty) {
        // rat reached destination
        // store output string in ans
        ans.push_back(output);
        return;
      }
  
      // Solve one case and recursion will handle the rest
      // Move up: (i,j) -> (i-1,j)
      int newx = srcx - 1;
      int newy = srcy;
      if (isSafe(newx, newy, mat, visited, n)) {
        visited[newx][newy] = true;
        solve(mat, visited, n, ans, newx, newy, destx, desty, output + "U");
        // Backtracking: unmark the cell when backtracking
        visited[newx][newy] = false;
      }
  
      // Move down: (i,j) -> (i+1,j)
      newx = srcx + 1;
      newy = srcy;
      if (isSafe(newx, newy, mat, visited, n)) {
        visited[newx][newy] = true;
        solve(mat, visited, n, ans, newx, newy, destx, desty, output + "D");
        // Backtracking: unmark the cell when backtracking
        visited[newx][newy] = false;
      }
  
      // Move left: (i,j) -> (i,j-1)
      newx = srcx;
      newy = srcy - 1;
      if (isSafe(newx, newy, mat, visited, n)) {
        visited[newx][newy] = true;
        solve(mat, visited, n, ans, newx, newy, destx, desty, output + "L");
        // Backtracking: unmark the cell when backtracking
        visited[newx][newy] = false;
      }
  
      // Move right: (i,j) -> (i,j+1)
      newx = srcx;
      newy = srcy + 1;
      if (isSafe(newx, newy, mat, visited, n)) {
        visited[newx][newy] = true;
        solve(mat, visited, n, ans, newx, newy, destx, desty, output + "R");
        // Backtracking: unmark the cell when backtracking
        visited[newx][newy] = false;
      }
  
    }
  
    // Function to find all paths from (0,0) to (n-1,n-1)
    vector<string> findPath(vector<vector<int>> &mat) {
      int n = mat.size();
      vector<string> ans;
      vector<vector<bool>> visited(n, vector<bool>(n, 0));
      int srcx = 0;
      int srcy = 0;
      int destx = n - 1;
      int desty = n - 1;
      string output = "";
  
      if (mat[0][0] == 0) {
        return ans;
      }
  
      solve(mat, visited, n, ans, srcx, srcy, destx, desty, output);
      return ans;
    }
  };
  