class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int, int> mp;
        int numRows = wall.size();
        for (auto& row: wall){
            int currEdge = 0;
            for (auto& val: row){
                currEdge += val;
                mp[currEdge]++;
            }
            mp[currEdge]--;
        }
        int minFreq = INT_MAX;
        for (auto& freq: mp) minFreq = min(numRows - freq.second, minFreq);
        return minFreq;
    }
};