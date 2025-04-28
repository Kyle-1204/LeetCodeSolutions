class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long ans = 0, currSum = 0;
        int right = 0, len = nums.size();
        for (int left = 0; left < len; left++){
            while (right < len && (right - left + 1) * (currSum + nums[right]) < k){
                currSum += nums[right];
                right++;
            }
            currSum -= nums[left];
            ans += right - left;
        }
        return ans;
    }
};