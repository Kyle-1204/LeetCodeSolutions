class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> allZeroes(n, vector<int> (n));
        for (int i = 0; i < n; i++){
            if (grid[i][i] != 0 && grid[i][n - i - 1] != 0){
                grid[i][i] = 0;
                grid[i][n - i - 1] = 0;
            }
            else return false;
        }
        return grid == allZeroes;
    }
};