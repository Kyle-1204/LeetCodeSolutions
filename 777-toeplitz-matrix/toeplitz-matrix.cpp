class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int numRows = matrix.size(), numCol = matrix[0].size();
        for (int i = 0; i < numCol - 1; i++){
            int val = matrix[0][i], row = 1, col = i + 1;
            while (row < numRows && col < numCol){
                if (matrix[row++][col++] != val) return false;
            }
        }
        for (int i = 1; i < numRows - 1; i++){
            int val = matrix[i][0], row = i + 1, col = 1;
            while (row < numRows && col < numCol){
                if (matrix[row++][col++] != val) return false;
            }
        }
        return true;
    }
};