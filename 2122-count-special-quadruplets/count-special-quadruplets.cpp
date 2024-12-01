class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int size = nums.size(), numQuads = 0;
        for (int a = 0; a < size - 3; a++){
            for (int b = a + 1; b < size - 2; b++){
                int firstSum = nums[a] + nums[b];
                for (int c = b + 1; c < size - 1; c++){
                    int secondSum = nums[c] + firstSum;
                    for (int d = c + 1; d < size; d++){
                        if (secondSum == nums[d]) numQuads++;
                    }
                }
            }
        }
        return numQuads;
    }
};