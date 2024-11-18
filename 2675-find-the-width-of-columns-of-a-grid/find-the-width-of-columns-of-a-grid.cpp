class Solution {
private:
    int findWidth(int n){
        int width = (n < 0 ? 1 : 0);
        while (n){
            width++;
            n /= 10;
        }
        return width;
    }
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++){
            int maxWidth = 1;
            for (int j = 0; j < m; j++) maxWidth = max(maxWidth, findWidth(grid[j][i]));
            ans[i] = maxWidth;
        }
        return ans;
    }
};