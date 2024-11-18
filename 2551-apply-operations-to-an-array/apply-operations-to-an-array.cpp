class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int size = nums.size() - 1, index = 0;
        vector<int> ans(size + 1);
        for (int i = 0; i < size; i++){
            ans[index] = nums[i];
            if (nums[i] == nums[i + 1]){
                ans[index] *= 2;
                i++;
            }
            if (nums[i]) index++;
        }
        if (nums[size] != nums[size-1]) ans[index] = nums[size];
        return ans;
    }
};