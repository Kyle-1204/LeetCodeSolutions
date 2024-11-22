class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int size = nums.size(), maxXOR = 0;
        for (int i = 0; i < size; i++){
            for (int j = i + 1; j < size; j++){
                int x = nums[i], y = nums[j];
                if (abs(x-y) <= min(x,y)) maxXOR = max(maxXOR, x ^ y);
            }
        }
        return maxXOR;
    }
};