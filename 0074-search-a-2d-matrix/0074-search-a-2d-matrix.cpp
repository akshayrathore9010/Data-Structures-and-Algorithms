class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int col = matrix[0].size();

        int n = rows * col;

        int s = 0;
        int e = n - 1;
        int mid;

        while (s <= e) {
            mid = s + (e - s) / 2;

            int rowIndex = mid / col;
            int colIndex = mid % col;

            if (matrix[rowIndex][colIndex] == target) {
                return true;
            }
            if (target > matrix[rowIndex][colIndex]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return false;  
    }
};
