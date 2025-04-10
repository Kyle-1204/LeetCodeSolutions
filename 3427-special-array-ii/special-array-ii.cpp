class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int numSize = nums.size(), qSize = queries.size(), nextFalse = numSize;
        vector<int> nextFalses(numSize);
        nextFalses[numSize - 1] = nextFalse;
        for (int i = numSize - 1; i > 0; i--) {
            if (nums[i-1] % 2 == nums[i] % 2) nextFalse = i;
            nextFalses[i-1] = nextFalse;
        }
        vector<bool> ans(qSize);
        for (int i = 0; i < qSize; i++) ans[i] = (nextFalses[queries[i][0]] > queries[i][1] ? true : false);
        return ans;
    }
};