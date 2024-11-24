class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int n = matrix.size(), numNegative = 0, minVal = INT_MAX;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                int absVal = abs(matrix[i][j]);
                sum += absVal;
                if (matrix[i][j] < 0) numNegative++;
                minVal = min(minVal, absVal);
            }
        }
        return (numNegative % 2 ? sum - (2 * minVal) : sum);
    }
};