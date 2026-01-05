class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long ans = 0;
        bool negCountOdd = false;
        int minAbsVal = INT_MAX;
        for (auto& row: matrix){
            for (auto& val: row){
                ans += abs(val);
                if (val < 0) negCountOdd = !negCountOdd;
                minAbsVal = min(minAbsVal, abs(val));
            }
        }
        if (negCountOdd) ans -= 2 * minAbsVal;
        return ans;
    }
};