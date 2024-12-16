class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxSub = 0, size = nums.size(), left = 0, right = 1;
        while (left < size){
            int currMin = nums[left];
            while (right < size && nums[right] == currMin) right++;
            if (right < size && nums[right] == currMin + 1){
                while (right < size && nums[right] == currMin + 1) right++;
                maxSub = max(maxSub, right - left);
            }
            while (left < size && nums[left] == currMin) left++;
        }
        return maxSub;
    }
};