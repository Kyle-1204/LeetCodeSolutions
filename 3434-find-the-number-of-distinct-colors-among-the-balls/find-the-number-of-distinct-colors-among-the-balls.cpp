class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n = queries.size(), currSize = 0;
        vector<int> ans(n);
        unordered_map<int, int> colors, balls;
        for (int i = 0; i < n; i++){
            int ball = queries[i][0], color = queries[i][1];
            if (balls.find(ball) != balls.end()) {
                int prevColor = balls[ball];
                colors[prevColor]--;
                if (colors[prevColor] == 0) {
                    colors.erase(prevColor);
                    currSize--;
                }
            }
            balls[ball] = color;
            colors[color]++;
            if (colors[color] == 1) currSize++;
            ans[i] = currSize;
        }
        return ans;
    }
};