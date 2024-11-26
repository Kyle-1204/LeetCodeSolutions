class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> players(n);
        int champion = -1;
        for (auto& edge: edges) players[edge[1]]++;
        for (int i = 0; i < n; i++){
            if (players[i] == 0){
                if (champion == -1) champion = i;
                else return -1;
            }
        }
        return champion;
    }
};