class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int numRows = matrix.size(), numCols = matrix[0].size(), i = 0;
        if (numRows == 1) return matrix[0];
        if (numCols == 1){
            vector<int> vals(numRows);
            while (i < numRows){
                vals[i] = matrix[i][0];
                i++;
            }
            return vals;
        }
        int size = numCols * numRows, x = 0, y = 0, dir = 0;
        vector<int> vals(size);
        vector<vector<int>> dirs= {{0,1}, {1,0}, {0, -1}, {-1,0}}; //R, D, L, U
        while (i < size){
            vals[i++] = matrix[y][x];
            matrix[y][x] = 101;
            int yMove = dirs[dir][0], xMove = dirs[dir][1];
            y += yMove;
            x += xMove;
            if (x + xMove == numCols || x + xMove == -1 || y + yMove == numRows || y + yMove == -1 || matrix[y + yMove][x + xMove] == 101)  dir = (dir + 1) % 4;
        }
        return vals;
    }
};