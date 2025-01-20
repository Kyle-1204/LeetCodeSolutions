class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        unordered_map<int, pair<int, int>> indices;
        int m = mat.size(), n = mat[0].size(), size = arr.size();
        vector<int> rows(m), cols(n);
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                indices[mat[i][j]] = make_pair(i, j);
            }
        }
        for (int i = 0; i < size; i++){
            int num = arr[i], row = indices[num].first, col = indices[num].second;
            rows[row]++;
            if (rows[row] == n) return i;
            cols[col]++;
            if (cols[col] == m) return i;
        }
        return size;
    }
};