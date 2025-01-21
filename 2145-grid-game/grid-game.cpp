class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int size = grid[0].size();
        long long pre = 0, suf = 0;
        vector<long long> prefix(size), suffix(size);
        for (int i = 0; i < size; i++){
            pre += grid[0][i];
            prefix[i] = pre;
            suf += grid[1][size - i - 1];
            suffix[size - i - 1] += suf;
        }
        long long maxVal = min(suffix[0] - suffix[size - 1], prefix[size-1] - prefix[0]);
        for (int i = 1; i < size - 1; i++){
            long long currMax = max(suffix[0] - suffix[i], prefix[size - 1] - prefix[i]);
            if (currMax < maxVal){
                maxVal = currMax;
            }
            //else if (currMax > secondMax) secondMax = currMax;
        }
        return maxVal;
    }
};