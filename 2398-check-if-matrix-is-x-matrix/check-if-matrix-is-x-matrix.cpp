class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        for (int i = 0; i < n; i++){
            if (grid[i][i] != 0 && grid[i][n - i - 1] != 0){
                grid[i][i] = 0;
                grid[i][n - i - 1] = 0;
            }
            else return false;
        }
        return grid == vector<vector<int>>(n, vector<int> (n));
    }
};