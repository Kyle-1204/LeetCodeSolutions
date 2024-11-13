class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        unordered_map<int, int> left, right;
        int size = nums.size() - 1;
        vector<int> ans(size + 1);
        for (int i = 0; i <= size; i++){
            int leftVal = nums[i], rightVal = nums[size - i];
            left[leftVal]++;
            ans[i] += left.size();
            ans[size - i] -= right.size();
            right[rightVal]++;
        }
        return ans;
    }
};