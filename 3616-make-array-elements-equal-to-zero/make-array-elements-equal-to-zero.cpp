class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int leftSum = 0, rightSum = accumulate(nums.begin(), nums.end(), 0), numOpps = 0, size = nums.size();
        for (int i = 0; i < size; i++){
            int num = nums[i];
            if (num == 0){
                if (leftSum == rightSum) numOpps += 2;
                else if (leftSum == rightSum - 1) numOpps++;
                else if (rightSum == leftSum - 1) numOpps++;
            }
            else{
                leftSum += num;
                rightSum -= num;
            }
        }
        return numOpps;
    }
};