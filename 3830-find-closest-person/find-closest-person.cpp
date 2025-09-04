class Solution {
public:
    int findClosest(int x, int y, int z) {
        int distX = abs(x - z), distY = abs(y - z);
        return (distX < distY ? 1 : (distX > distY ? 2 : 0));
    }
};