class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minVal = INT_MAX, maxDiff = -1;
        for (auto& num: nums){
            if (num <= minVal) minVal = num;
            else maxDiff = max(maxDiff, num - minVal);
        }
        return maxDiff;
    }
};