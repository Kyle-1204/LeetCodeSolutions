class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int leftSum = 0, rightSum = accumulate(nums.begin(), nums.end(), 0), size = nums.size();
        for (int i = 0; i < size; i++){
            int num = nums[i];
            if (leftSum == rightSum - num) return i;
            leftSum += num;
            rightSum -= num;
        }
        return -1;
    }
};