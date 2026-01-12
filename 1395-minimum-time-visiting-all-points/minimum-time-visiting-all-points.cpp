class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int numPoints = 0;
        for (int i = 1; i < points.size(); i++){
            int x = abs(points[i][0] - points[i-1][0]), y = abs(points[i][1] - points[i-1][1]);
            numPoints += min(x, y) + abs(x - y);
        }
        return numPoints;
    }
};