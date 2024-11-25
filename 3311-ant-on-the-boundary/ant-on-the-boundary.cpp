class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int pos = 0, numReturns = 0;
        for (auto &num: nums){
            pos += num;
            if (pos == 0) numReturns++;
        }
        return numReturns;
    }
};