class Solution {
public:
    int maxDistance(string moves) {
        int x = 0, y = 0, numFree = 0;
        for (auto& move: moves){
            if (move == 'U') y++;
            else if (move == 'D') y--;
            else if (move == 'R') x++;
            else if (move == 'L') x--;
            else numFree++;
        }
        if (x < 0) x -= numFree;
        else x += numFree;
        return abs(x) + abs(y);
    }
};