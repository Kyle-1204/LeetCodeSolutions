class Solution {
public:
    vector<int> largestSubarray(vector<int>& nums, int k) {
        int maxVal = 0, maxIndex = 0;
        for (int i = 0; i <= nums.size() - k; i++){
            if (nums[i] > maxVal){
                maxVal = nums[i];
                maxIndex = i;
            }
        }
        return vector<int>(nums.begin() + maxIndex, nums.begin() + maxIndex + k);
    }
};