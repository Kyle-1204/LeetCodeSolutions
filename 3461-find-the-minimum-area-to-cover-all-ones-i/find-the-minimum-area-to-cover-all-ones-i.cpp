class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int minX = INT_MAX, maxX = -1, minY = INT_MAX, maxY = -1, xLen = grid[0].size(), yLen = grid.size();
        for (int i = 0; i < yLen; i++){
            for (int j = 0; j < xLen; j++){
                if (grid[i][j] == 1){
                    minX = min(j, minX);
                    maxX = max(j, maxX);
                    minY = min(i, minY);
                    maxY = max(i, maxY);
                }
            }
        }
        return (maxX - minX + 1) * (maxY - minY + 1);
    }
};