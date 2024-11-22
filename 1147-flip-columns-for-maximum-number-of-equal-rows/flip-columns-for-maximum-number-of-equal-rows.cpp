class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string, int> mp;
        int numRows = 1;
        for (auto &row: matrix){
            string pattern;
            if (row[0] == 0){
                for (auto& bit: row) pattern += to_string(bit);
            }
            else{
                for (auto& bit: row) pattern += to_string(bit^1);
            }
            mp[pattern]++;
        }
        for (auto& freq: mp) numRows = max(numRows, freq.second);
        return numRows;
    }
};