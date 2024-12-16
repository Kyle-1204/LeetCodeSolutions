class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int size = nums.size();
        while (k--){
            int min = *min_element(nums.begin(), nums.end());
            for (int i = 0; i < size; i++){
                if (nums[i] == min){
                    nums[i] *= multiplier;
                    break;
                }
            }
        }
        return nums;
    }
};