class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int size = nums.size(), minSum = 151;
        for (int i = 0; i < size - 2; i++){
            int first = nums[i];
            for (int j = i + 1; j < size - 1; j++){
                if (first < nums[j]){
                    int second = nums[j];
                    for (int k = j + 1; k < size; k++){
                        if (nums[k] < nums[j]) minSum = min(minSum, first + second + nums[k]);
                    }
                }
            }
        }
        return (minSum == 151 ? -1 : minSum);
    }
};