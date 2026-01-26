class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int lastElement = nums[nums.size() - 1];
        for (int i = nums.size() - 2; i >= 0; i--){
            if (nums[i] < lastElement) lastElement = nums[i];
            else return i + 1;
        }
        return 0;
    }
};