class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), prevVal = -1;
        for (int i = 0; i < n; i++){
            int val = grid[0][i];
            if (val == prevVal) return false;
            prevVal = val;
            for (int j = 1; j < m; j++){
                if (grid[j][i] != val) return false;
            }
        }
        return true;
    }
};