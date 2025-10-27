class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int numOnes = 0, ans = 0;
        for (auto& row: bank){
            int currRow = 0;
            for (auto& cell: row){
                if (cell == '1'){
                    ans += numOnes;
                    currRow++;
                }
            }
            if (currRow) numOnes = currRow;
        }
        return ans;
    }
};