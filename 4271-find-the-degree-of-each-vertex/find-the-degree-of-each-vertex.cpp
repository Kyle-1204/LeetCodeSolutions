class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> degrees(n);
        for (auto& edge: matrix){
            for (int i = 0; i < n; i++) degrees[i] += edge[i];
        }
        return degrees;
    }
};