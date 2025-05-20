class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int len = nums.size(), prefixSum = 0;
        vector<int> diffArray(len + 1);
        for (auto& query: queries){
            diffArray[query[0]]++;
            diffArray[query[1] + 1]--;
        }
        for (int i = 0; i < len; i++){
            prefixSum += diffArray[i];
            if (prefixSum < nums[i]) return false;
        }
        return true;
    }
};