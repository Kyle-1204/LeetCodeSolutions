class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int len = questions.size();
        long long currMax = 0;
        vector<long long> vals(len + 1);
        for (int i = 0; i < len; i++){
            //points = questions[i][0], brainpower = questions[i][1]
            int nextIndex = min(len, i + questions[i][1] + 1);
            currMax = max(vals[i], currMax);
            vals[nextIndex] = max(vals[nextIndex], currMax + questions[i][0]);
        }
        return vals[len];
    }
};