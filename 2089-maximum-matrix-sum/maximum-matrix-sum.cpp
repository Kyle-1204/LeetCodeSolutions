class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int numNegative = 0, minVal = INT_MAX;
        for (auto& row: matrix){
            for (auto& val: row){
                int absVal = abs(val);
                sum += absVal;
                if (val < 0) numNegative++;
                minVal = min(minVal, absVal);
            }
        }
        return (numNegative % 2 ? sum - (2 * minVal) : sum);
    }
};