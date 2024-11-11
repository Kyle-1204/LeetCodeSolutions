class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        bool firstFound = false;
        for (auto& num: nums){
            if (!(num % 2)){
                if (firstFound) return true;
                firstFound = true;
            }
        }
        return false;
    }
};