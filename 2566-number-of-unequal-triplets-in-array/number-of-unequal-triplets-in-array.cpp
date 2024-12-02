class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int size = nums.size(), numTriplets = 0;
        for (int i = 0; i < size - 2; i++){
            int first = nums[i];
            for (int j = i + 1; j < size - 1; j++){
                if (nums[j] != first){
                    int second = nums[j];
                    for (int k = j + 1; k < size; k++){
                        if (nums[k] != first && nums[k] != second) numTriplets++;
                    }
                }
            }
        }
        return numTriplets;
    }
};