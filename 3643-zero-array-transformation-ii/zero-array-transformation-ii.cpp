class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size(), left = 0, right = queries.size();

        if (!currentIndexZero(nums, queries, right)) return -1;
        
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (currentIndexZero(nums, queries, middle)) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }
        return left;
    }
private:
    bool currentIndexZero(vector<int>& nums, vector<vector<int>>& queries, int m){
        int n = nums.size(), sum = 0;
        vector<int> differenceArray(n + 1, 0);
        for (int queryIndex = 0; queryIndex < m; queryIndex++) {
            int start = queries[queryIndex][0], end = queries[queryIndex][1], val = queries[queryIndex][2];
            differenceArray[start] += val;
            differenceArray[end + 1] -= val;
        }
        for (int i = 0; i < n; ++i) {
            sum += differenceArray[i];
            if (sum < nums[i]) return false;
        }
        return true;
    }
};