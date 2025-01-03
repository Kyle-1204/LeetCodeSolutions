class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int numRows = matrix.size(), numCols = matrix[0].size();
        for (int i = 0; i < numCols; i++){
            vector<int> indices;
            int currMax = 0;
            for (int j = 0; j < numRows; j++){
                if (matrix[j][i] == -1) indices.push_back(j);
                currMax = max(currMax, matrix[j][i]);
            }
            for (auto& index: indices) matrix[index][i] = currMax;
        }
        return matrix;
    }
};