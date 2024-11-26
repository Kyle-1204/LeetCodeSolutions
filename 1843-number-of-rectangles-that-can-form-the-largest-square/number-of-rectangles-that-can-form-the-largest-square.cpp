class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int minLen = 0, numSquares;
        for (auto& rectangle: rectangles){
            int shorter = min(rectangle[0], rectangle[1]);
            if (shorter > minLen){
                minLen = shorter;
                numSquares = 1;
            }
            else if (shorter == minLen) numSquares++;
        }
        return numSquares;
    }
};