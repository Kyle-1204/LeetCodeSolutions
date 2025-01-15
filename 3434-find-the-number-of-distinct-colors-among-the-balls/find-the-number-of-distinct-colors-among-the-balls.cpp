class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> ans(n);
        unordered_map<int, int> colors, balls;
        for (int i = 0; i < n; i++){
            int ball = queries[i][0], color = queries[i][1];
            if (balls.find(ball) != balls.end()) {
                int prevColor = balls[ball];
                colors[prevColor]--;
                if (colors[prevColor] == 0) colors.erase(prevColor);
            }
            balls[ball] = color;
            colors[color]++;
            ans[i] = colors.size();
        }
        return ans;
    }
};