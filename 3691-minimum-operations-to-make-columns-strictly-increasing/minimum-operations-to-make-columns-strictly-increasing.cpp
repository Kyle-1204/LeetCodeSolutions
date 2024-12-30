class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int numCol = grid[0].size(), numRows = grid.size(), ans = 0;
        for (int i = 0; i < numCol; i++){
            for (int j = 1; j < numRows; j++){
                if (grid[j][i] <= grid[j-1][i]){
                    int inc = grid[j-1][i] - grid[j][i] + 1;
                    ans += inc;
                    grid[j][i] += inc;
                }
            }
        }
        return ans;
    }
};