class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int numZeros = k;
        for (auto& num: nums){
            if (num == 0) numZeros++;
            else{
                if (numZeros < k) return false;
                numZeros = 0;
            }
        }
        return true;
    }
};