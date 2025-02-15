class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int size = nums.size();
        vector<int> count(size + 1);
        int sum = 0, k = 0;

        for (int index = 0; index < size; index++) {
            while (sum + count[index] < nums[index]) {
                k++; // Increment k before accessing queries
                if (k - 1 >= queries.size()) {
                    return -1;
                }
                int left = queries[k - 1][0], right = queries[k - 1][1], val = queries[k - 1][2];
                if (right >= index) {
                    count[max(left, index)] += val;
                    count[right + 1] -= val;
                }
            }
            sum += count[index];
        }
        return k;
    }
};