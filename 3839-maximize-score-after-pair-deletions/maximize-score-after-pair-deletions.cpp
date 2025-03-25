class Solution {
public:
    int maxScore(vector<int>& nums) {
        int sum = 0, remainder = INT_MAX, len = nums.size();
        if (len % 2){
            for (int i = 0; i < len; i++){
                remainder = min(remainder, nums[i]);
                sum += nums[i];
            }
        }
        else{
            for (int i = 1; i < len; i++){
                remainder = min(remainder, nums[i] + nums[i - 1]);
                sum += nums[i];
            }
            sum += nums[0];
        }
        return sum - remainder;
    }
};