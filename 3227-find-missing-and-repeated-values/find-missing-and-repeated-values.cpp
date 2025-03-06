class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int size = grid.size(), repeat;
        vector<int> vals(size * size);
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                vals[grid[i][j] - 1]++;
                if (vals[grid[i][j] - 1] == 2) repeat = grid[i][j];
            }
        }
        for (int i = 0; i < size * size; i++){
            if (vals[i] == 0) return {repeat, i + 1};
        }
        return {};
    }
};