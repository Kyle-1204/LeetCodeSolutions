class Solution {
public:
    vector<string> createGrid(int m, int n) {
        string row(n, '#');
        vector<string> grid(m, row);
        for (int i = 0; i < m; i++){
            grid[i][0] = '.';
        }
        for (int i = 0; i < n; i++){
            grid[m-1][i] = '.';
        }
        return grid;
    }
};