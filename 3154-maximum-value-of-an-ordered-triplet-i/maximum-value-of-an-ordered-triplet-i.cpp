class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxVal = 0;
        int size = nums.size();
        for (int i = 0; i < size - 2; i++){
            for (int j = i + 1; j < size - 1; j++){
                if (nums[i] > nums[j]){
                    long long diff = nums[i] - nums[j];
                    for (int k = j + 1; k < size; k++) maxVal = max(maxVal, diff * nums[k]);
                }
            }
        }
        return maxVal;
    }
};