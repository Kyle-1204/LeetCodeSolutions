class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size(), n = box[0].size();
        cout << m << "   " << n << endl;
        vector<vector<char>> ans(n, vector<char>(m, '#'));
        for (int i = 0; i < m; i++){
            int numCells = 0, numStones = 0, start = 0;
            for (int j = 0; j < n; j++){
                cout << box[i][j] << endl;
                if (box[i][j] == '*') {
                    for (int k = 0; k < numCells - numStones; k++) ans[start + k][m - i - 1] = '.';
                    ans[j][m - i - 1] = '*';
                    numCells = 0;
                    numStones = 0;
                    start = j+1;
                }
                else{
                    if (box[i][j] == '#') numStones++;
                    numCells++;
                }
            }
            cout << "start: " << start << " diff:" << numCells - numStones << endl;
            for (int l = 0; l < numCells - numStones; l++) ans[start + l][m - i - 1] = '.';
        }
        return ans;
    }
};