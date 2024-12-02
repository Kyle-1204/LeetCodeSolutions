class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int rowSize = grid[0].size();
        vector<int> maxVals(rowSize);
        for (auto& row: grid){
            sort(row.begin(), row.end());
            for (int i = 0; i < rowSize; i++) maxVals[i] = max(maxVals[i], row[i]);
        }
        return (accumulate(maxVals.begin(), maxVals.end(), 0));
    }
};