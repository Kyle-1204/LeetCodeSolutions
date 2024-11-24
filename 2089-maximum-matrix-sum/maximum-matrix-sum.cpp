class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int numNegative = 0, minVal = INT_MAX;
        for (auto& row: matrix){
            for (auto& val: row){
                if (val < 0) {
                    int absVal = abs(val);
                    sum += absVal;
                    numNegative++;
                    minVal = min(minVal, absVal);
                }
                else{
                    sum += val;
                    minVal = min(minVal, val);
                }
            }
        }
        return (numNegative % 2 ? sum - (2 * minVal) : sum);
    }
};