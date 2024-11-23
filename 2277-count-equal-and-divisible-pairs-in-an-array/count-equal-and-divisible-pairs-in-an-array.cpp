class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int size = nums.size(), numPairs = 0;
        for (int i = 0; i < size - 1; i++){
            for (int j = i+1; j < size; j++){
                if (nums[i] == nums[j] && !((i * j) % k)) numPairs++;
            }
        }
        return numPairs;
    }
};