class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int len = questions.size();
        long long currMax = 0;
        vector<long long> vals(len + 1);
        for (int i = 0; i < len; i++){
            int points = questions[i][0], brainpower = questions[i][1], nextIndex = min(len, i + brainpower + 1);
            currMax = max(vals[i], currMax);
            vals[nextIndex] = max(vals[nextIndex], currMax + points);
        }
        return vals[len];
    }
};