class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prevVal = 0, numLasers = 0;
        for (auto row: bank){
            int currVal = 0;
            for (auto cell: row){
                if (cell == '1') currVal++;
            }
            numLasers += (prevVal * currVal);
            if (currVal) prevVal = currVal;
        }
        return numLasers;
    }
};