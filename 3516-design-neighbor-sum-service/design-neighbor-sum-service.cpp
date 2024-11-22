class NeighborSum {
public:
    vector<vector<int>> g;
    unordered_map<int, pair<int, int>> mp;
    int size;
    NeighborSum(vector<vector<int>>& grid) {
        g = grid;
        size = grid.size();
        for (int y = 0; y < size; y++){
            for (int x = 0; x < size; x++){
                mp[g[y][x]] = make_pair(x, y);
            }
        }
        size--;
    }
    
    int adjacentSum(int value) {
        pair<int, int> point = mp[value];
        int x = point.first, y = point.second, sum = 0;
        if (x > 0) sum += g[y][x-1];
        if (x < size) sum += g[y][x+1];
        if (y > 0) sum += g[y-1][x];
        if (y < size) sum += g[y+1][x];
        return sum;
    }
    
    int diagonalSum(int value) {
        pair<int, int> point = mp[value];
        int x = point.first, y = point.second, sum = 0;
        if (x > 0 && y > 0) sum += g[y-1][x-1];
        if (x > 0 && y < size) sum += g[y+1][x-1];
        if (x < size && y > 0) sum += g[y-1][x+1];
        if (x < size && y < size) sum += g[y+1][x+1];
        return sum;
    }
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */