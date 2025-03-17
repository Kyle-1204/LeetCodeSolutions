class Solution {
public:
    long long countSubarrays(vector<int>& nums) {
        long long ans = 0;
        int size = nums.size(), left = 0;
        while (left < size){
            int right = left + 1, currMax = nums[left];
            ans++;
            while (right < size && nums[right] > currMax) {
                ans += right - left + 1;
                currMax = nums[right];
                right++;
            }
            left = right;
        }
        return ans;
    }
};