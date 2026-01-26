class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int len = nums.size(), lastElement = INT_MAX;
        for (int i = len - 1; i >= 0; i--){
            if (nums[i] < lastElement) lastElement = nums[i];
            else return i + 1;
        }
        return 0;
    }
};